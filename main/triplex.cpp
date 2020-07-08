#include <iostream>
#include "../includes/globals.h"
#include "../includes/strCheckers.h"
#include "../includes/stories.h"


int PlayGame(int Level)
{
    switch (Level)
    {
    case 0:
        return LevelCleared = Intro();
        break;
    case 1:
        return LevelCleared = Lvl1();
        break;

    default:
        return 0;
        break;
    }
}
    
    

int main()
{
    int Level = 0;
    while(true)
    {
        int error = PlayGame(Level);
        // errorCheck(error);
        
        std::cin.clear(); //clears any errors
        std::cin.ignore(); //discards the buffer

        if (LevelCleared)
        {
            ++Level;
        }
        
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