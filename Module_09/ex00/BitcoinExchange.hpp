#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <sys/_types/_time_t.h>
#include <vector>
#include <time.h>
#include <ctime>
#include <cmath>
#include <ctime>
#include <exception>
#include <stdexcept>
#include <vector>


typedef std::stringstream ss;

class BitcoinExchange {

    private:
        std::map<time_t, float> clean_db;
        std::vector<std::string> db;
        bool        validData(std::string data);
        time_t      validDate(std::string date);
        float       validPrice(std::string price);
        bool        validHeader(std::string header, char delim);
        void        insertData(std::string file_name);
        void        fillDb();
        void        parseData(char delim);

        void        conversion(time_t date, float value);

        void        getValueByDate(time_t date, float value);

        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &btc);
        BitcoinExchange &operator=(const BitcoinExchange &btc);

    public:
        BitcoinExchange(std::string file_name);
        ~BitcoinExchange();

        class InvalidDate: public std::exception {
            public:
                const char *what() const throw();
        };

        class PriceTooHigh: public std::exception {
            public:
                const char *what() const throw();
        };

        class PriceTooLow: public std::exception {
            public:
                const char *what() const throw();
        };

};