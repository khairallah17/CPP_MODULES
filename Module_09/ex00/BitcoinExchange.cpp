#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <list>
#include <sstream>
#include <stdexcept>
#include <sys/_types/_time_t.h>
#include <utility>

typedef std::stringstream ss;

std::list<std::string> split(std::string str, char delim) {

    ss res(str);
    std::string word;
    std::list<std::string> splited;

    while (!res.eof()) {
        getline(res, word, delim);
        splited.push_back(word);
    }

    return splited;
}

std::string trim(const std::string& str) {
    size_t start = str.find_first_not_of(" \t\n\r\f\v");
    
    if (start == std::string::npos) {
        return "";
    }

    size_t end = str.find_last_not_of(" \t\n\r\f\v");

    return str.substr(start, end - start + 1);
}

BitcoinExchange::BitcoinExchange(std::string file_name) {
    BitcoinExchange::insertDb();
    BitcoinExchange::insertData(file_name);
}

void BitcoinExchange::insertDb() {

    std::ifstream file_data("data.csv");

    if (!file_data)
        throw std::logic_error("Error: opening file");

    std::string data_value;
    int header = 0;

    while (std::getline(file_data, data_value)) {
        try {
            if (header == 0) {
                header = 1;
                BitcoinExchange::validDBHeader(data_value, ',');
            } else
                parseDb(data_value);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
            exit(0);
        }
    }

}

void    BitcoinExchange::parseDb(std::string str) {

    std::list<std::string> splited = split(str, ',');
    time_t date = BitcoinExchange::validDate(trim(splited.front()));
    float price = std::atof(trim(splited.back()).c_str());
    
    clean_db[date] = price;

}

BitcoinExchange::~BitcoinExchange() {}

void    BitcoinExchange::conversion(time_t date, float value) {

    BitcoinExchange::getValueByDate(date, value);

}

const   char*   BitcoinExchange::InvalidDate::what() const throw() {
    return "Error: Invalid Date";
}

const   char*   BitcoinExchange::PriceTooHigh::what() const throw() {
    return "Error: too large number.";
}

const   char*   BitcoinExchange::PriceTooLow::what() const throw() {
    return "Error: not a positive number.";
}

const   char*   BitcoinExchange::InvalidFormat::what() const throw() {
    return "Error: invalid format.";
}

bool    BitcoinExchange::validHeader(std::string header, char delim) {

    std::list<std::string> splited_header = split(header, delim);

    std::string value_0 = splited_header.front();
    std::string value_1 = splited_header.back();

    if (trim(value_0) != "date" || trim(value_1) != "value")
        throw std::logic_error("Error: invalid header");

    return true;
}

bool    BitcoinExchange::validDBHeader(std::string header, char delim) {

    std::list<std::string> splited_header = split(header, delim);

    std::string value_0 = splited_header.front();
    std::string value_1 = splited_header.back();

    if (trim(value_0) != "date" || trim(value_1) != "exchange_rate")
        throw std::logic_error("Error: invalid header");

    return true;
}

void    BitcoinExchange::insertData(std::string file_name) {

    std::ifstream file_data(file_name);
    if (!file_data)
        throw std::logic_error("Error: unable to open file");
    std::string data_value;
    int header = 0;

    while (std::getline(file_data, data_value)) {
        if (header == 0) {
            BitcoinExchange::validHeader(data_value, '|');
            header = 1;
        } else {
            BitcoinExchange::parseData(data_value);
        }
    }

}

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

time_t    BitcoinExchange::validDate(std::string date) {

    struct tm tm = {};
    char* ret = strptime(date.c_str(), "%Y-%m-%d", &tm);

    if (ret == NULL)
        throw InvalidDate();
    
    time_t result = mktime(&tm);
    if (result == -1) {
        throw std::logic_error("Error: invalid Date");
    }

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (tm.tm_mon == 1 && !isLeapYear(tm.tm_year + 1900) && tm.tm_mday > 28) {
        std::cout << date << std::endl;
        throw std::logic_error("Error: invalid Date");
    } else if (tm.tm_mday > daysInMonth[tm.tm_mon]) {
        std::cout << date << " ==> " << tm.tm_mon << " " << tm.tm_mday << std::endl;
        throw std::logic_error("Error: invalid Date");
    }

    return result;

}

float    BitcoinExchange::validPrice(std::string price) {

    std::stringstream ss(price);

    float prc;
    ss >> prc;
    if (ss.fail() || !ss.eof())
        throw BitcoinExchange::InvalidFormat();

    if (prc < 0)
        throw BitcoinExchange::PriceTooLow();
    else if (prc > 1000)
        throw BitcoinExchange::PriceTooHigh();

    return prc;
}

void    BitcoinExchange::parseData(std::string str) {

        try {

            std::list<std::string> splited = split(str, '|');
            time_t date = BitcoinExchange::validDate(trim(splited.front()));
            float price = BitcoinExchange::validPrice(trim(splited.back()));
            BitcoinExchange::conversion(date, price);
        
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }


}

void    BitcoinExchange::getValueByDate(time_t date, float value) {

    std::map<time_t, float>::iterator it = clean_db.lower_bound(date);

    if (it != clean_db.end() && it->first == date) {
        struct tm * timeinfo = localtime(&date);
        char buffer[11] = {0};
        strftime(buffer, sizeof(buffer), "%Y-%m-%d", timeinfo);
        std::cout << buffer << " => " << value << " = " << (it->second * value) << std::endl; 
        return ;
    }

    if (it != clean_db.begin()) {
        --it;
        struct tm * timeinfo = localtime(&date);
        char buffer[11] = {0};
        strftime(buffer, sizeof(buffer), "%Y-%m-%d", timeinfo);
        std::cout << buffer << " => " << value << " = " << (it->second * value) << std::endl; 
        return ;
    }

}