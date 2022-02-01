// Just some challenge from edabit, and I was retarded and missed a typo in loop -> r instead of "r".

#include <iostream>
#include <string>

std::string longBurp(int num) {
	std::string bu = "Bu";
	std::string r = "";
	std::string burp;
	for(int i = 0; i < num; i++)
	{
		r.append("r");
	}
	burp.append(bu);
	burp.append(r);
	burp.append("p");
	
	return burp;
}

int main() {

	std::cout << longBurp(1) << std::endl;
	std::cout << longBurp(3) << std::endl;
	std::cout << longBurp(4) << std::endl;
    
}