#include <iostream>
#include <string>

std::string maskify(std::string str) {

    std::string newString;
    int length = str.length();
    if(str.length() <= 4)
    {
        return str;
    }
    else
    {
        
        return std::string(length, '#');
    }
}

int main() {
    std::cout << maskify("evjeab") << std::endl;
}