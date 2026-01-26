#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "String address:\t\t\t" << &str << std::endl;
    std::cout << "Address held by stringPTR:\t" << stringPTR << std::endl;
    std::cout << "Address held by stringREF:\t" << &stringREF << std::endl;
    std::cout << "Value of string:\t\t" << str << std::endl;
    std::cout << "Value that stringPTR points to:\t" << *stringPTR << std::endl;
    std::cout << "Value that of stringREF:\t" << stringREF << std::endl;
    return 0;
}