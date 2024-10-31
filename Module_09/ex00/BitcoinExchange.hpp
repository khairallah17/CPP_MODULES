#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <sys/_types/_time_t.h>
#include <vector>
#include <time.h>

typedef std::stringstream ss;

class BitcoinExchange {

    private:
        std::map<time_t, float> clean_data;
        std::map<time_t, float> clean_db;
        std::vector<std::string> db;
        bool        validData(std::string data);
        time_t      validDate(std::string date);
        float       validPrice(std::string price);
        bool        validHeader(std::string header, char delim);
        void        insertData(std::string file_name);
        void        fillDb();
        void        parseData(char delim);
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &btc);
        BitcoinExchange &operator=(const BitcoinExchange &btc);

    public:
        BitcoinExchange(std::string file_name);
        ~BitcoinExchange();

};