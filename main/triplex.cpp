#include <iostream>
#include <windows.h>
using std::string;

int main()
{
    //namespace :: property
    std::cout << "\n+ Attention you are entering a restricted zone \n" ; 
    std::cout << "\n+ Enter the correct code in order to continue \n" ; 
    
    const int CodeA = 1;
    const int CodeB = 2;
    const int CodeC = 3;

    int CodeSum = CodeA + CodeB + CodeC;

    std::cout << "+ There are 3 numbers declared as const" << std::endl;
    std::cout << "+ They add up to: " << CodeSum << std::endl;

    std::cout << "+ Enter any number separated by space and press enter" << std::endl;
    int UserCode1, UserCode2, UserCode3;
    int UserSum;
    std::cin >> UserCode1 >> UserCode2 >> UserCode3;
    std::cout << "+ You entered: " << UserCode1 << UserCode2 << UserCode3 << std::endl;
    UserSum = UserCode1 + UserCode2 + UserCode3;
    std::cout << "+ The sum of it is: " << UserSum << std::endl;

    return 0;
}

int stringPrinter (string phrase) 
{
    int strLength = phrase.length();

    return 0;
}