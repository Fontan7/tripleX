#include <iostream>
using std::string;

//global variables
const int Level = 0;


bool PlayGame(const int)
{
    const int CodeA = 1;
    const int CodeB = 2;
    const int CodeC = 3;
    int CodeSum = CodeA + CodeB + CodeC;

    int UserCodeA;
    int UserCodeB;
    int UserCodeC;
 
    //namespace :: property
    std::cout << "\n\n+ Attention you are entering a restricted zone \n" ; 
    std::cout << "\n+ Enter the correct code in order to continue \n" ; 

    std::cout << "+ There are 3 numbers declared as const" << std::endl;
    std::cout << "+ They add up to: " << CodeSum << std::endl;

    std::cout << "+ Enter any number separated by space and press enter" << std::endl;
    
    std::cin >> UserCodeA >> UserCodeB >> UserCodeC;
    int UserSum = UserCodeA + UserCodeB + UserCodeC;

    if(CodeSum == UserSum)
    {
        std::cout << "+ Congrats! you are a genius and skipped te last part of the game";
        return 1;
    }

    std::cout << "+ You entered: " << UserCodeA << UserCodeB << UserCodeC << std::endl;
    std::cout << "+ The sum of it is: " << UserSum << std::endl;

    return 1;
}


int main()
{
    while(true)
    {
        
        bool LevelCleared = PlayGame(Level);
        
        std::cin.clear(); //clears any errors
        std::cin.ignore(); //discards the buffer
    }
    
    return 0;
}


/*
int stringPrinter (string phrase) 
{
    int strLength = phrase.length();

    return 0;
}
*/