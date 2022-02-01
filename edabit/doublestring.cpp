#include <iostream>
#include <string>

std::string doubleChar(std::string str) {
	std::string doubleString = "";
    std::string buffer = "";
	for(char s : str)
	{
		buffer = s;
        doubleString += s;
        doubleString += s;
	}
	return doubleString;
}

int main() {

    std::cout << doubleChar("Mrkev") << std::endl;
    return(0);
}