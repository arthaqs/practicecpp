#include <iostream>
#include <string>

int main()
{
    std::string mrkev = "Mrkev";
    for(char i : mrkev)
    {
        std::cout << i << std::endl;
    }

    return(0);
}