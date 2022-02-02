// This is edabit challenge to maskify the string - as a soft of simulation of
// hiding a credit card number. This challenge itself was sort of easy - I had 
// somewhat solution in mind relatively soon, but there were some battles with c++ :D
// push_back saved my hide.
#include <iostream>
#include <string>

std::string maskify(std::string str) {
	int length = str.length();
	std::string maskedStr;
	if(length <= 4)
	{
		return str;		
	}
	else
	{
		for(char c : str)
        {
            if(length > 4)
            {
                maskedStr.push_back('#');
            }
            else
            {
                maskedStr.push_back(c);
            }
            length--;
        }
        return maskedStr;
	}
}
int main()
{
    std::cout << maskify("mrkevfasdfasdfasd5456");
    return(0);
}