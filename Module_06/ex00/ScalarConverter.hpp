#include <string>

class ScalarConverter {

    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &convert);
        ScalarConverter &operator=(const ScalarConverter &convert);

    public:
        static void converter(std::string toConvert);

};