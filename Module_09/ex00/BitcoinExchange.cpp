#include "BitcoinExchange.hpp"
#include <cmath>
#include <ctime>
#include <exception>
#include <stdexcept>
#include <vector>

typedef std::stringstream ss;

std::vector<std::string> split(std::string str, char delim) {

    ss res(str);
    std::string word;
    std::vector<std::string>splited;

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
    BitcoinExchange::insertData(file_name);
    BitcoinExchange::parseData('|');
    db.clear();
    BitcoinExchange::insertData("data.csv");
    BitcoinExchange::fillDb();
}

BitcoinExchange::~BitcoinExchange() {}

bool    BitcoinExchange::validHeader(std::string header, char delim) {

    std::vector<std::string> splited_header = split(header, delim);

    if (trim(splited_header[0]) != "date" || trim(splited_header[1]) != "value") {
        std::cout << splited_header[0] << "<==>" << splited_header[1] << std::endl;
        throw std::logic_error("Error: invalid header");
    }

    return true;
}

void    BitcoinExchange::fillDb() {

    std::vector<std::string>::iterator data_begin = db.begin();
    std::vector<std::string>::iterator data_end = db.end();

    data_begin++;

    while (data_begin != data_end) {
        std::vector<std::string>splited = split(*data_begin, ',');
        clean_db.insert(std::pair<time_t, float>(BitcoinExchange::validDate(trim(splited[0])), std::atof(splited[1].c_str())));
        data_begin++;
    }

}

void    BitcoinExchange::insertData(std::string file_name) {

    std::ifstream file_data(file_name);
    std::string data_value;

    while (std::getline(file_data, data_value)) {
        db.push_back(data_value);
    }

}

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

time_t    BitcoinExchange::validDate(std::string date) {

    struct tm tm;

    char *ret = strptime(date.c_str(), "%Y-%m-%d", &tm);
        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


    if (ret == NULL) {
        std::cout << date << std::endl;
        throw std::logic_error("Error: invalid Date");
    }

    if (tm.tm_mon == 1 && !isLeapYear(tm.tm_year) && tm.tm_mday > 28 ) {
        std::cout << date << std::endl;
        throw std::logic_error("Error: invalid Date");
    } else if (tm.tm_mday > daysInMonth[tm.tm_mon]) {
        std::cout << date << " ==> " << tm.tm_mon << " " << tm.tm_mday << std::endl;
        throw std::logic_error("Error: invalid Date");
    }

    return mktime(&tm);

}

float    BitcoinExchange::validPrice(std::string price) {

    float prc = std::atof(price.c_str());

    if (prc < 0 || prc > 1000) {
        std::cout << prc << std::endl;
        throw std::logic_error("Error: invalid Price");
    }

    return prc;
}

void    BitcoinExchange::parseData(char delim) {

    std::vector<std::string>::iterator data_start = db.begin();
    std::vector<std::string>::iterator data_end = db.end();

    BitcoinExchange::validHeader(*data_start, delim);
    data_start++;
    while (data_start != data_end) {

        std::vector<std::string> splited = split(*data_start, '|');
        clean_data[BitcoinExchange::validDate(trim(splited[0]))] = BitcoinExchange::validPrice(trim(splited[1]));
        
        data_start++;
    }

    std::cout << "DONE" << std::endl;

}

bool    BitcoinExchange::validData(std::string data) {

    if (data.empty())
        return false;

    std::vector<std::string> splited_data = split(data, ',');
    // int valid_date = 

    return true;

}