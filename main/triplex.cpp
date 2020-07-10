#include <iostream>
#include <string>
#include "../includes/globals.h"
#include "../includes/checkers.h"
#include "../includes/printers.h"
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
    case 2:
        return LevelCleared = Lvl2();
        break;
    default:
        return 0;
        break;
    }
}

int main()
{
    while(true)
    {
        int LevelCleared = PlayGame(Level);
        
        std::cin.clear(); //clears any errors
        std::cin.ignore(); //discards the buffer

        if (LevelCleared)
        {
            ++Level;
        }
        else
        {
            Print("\n\n                      ");
            SlowPrint("Y O U  L O S E\n", 300);
            SlowPrint("                        play again? ", 50);
            std::cin >> UserResponseStr;
            Continue = StringRespCheck(toLower(UserResponseStr), "y");
            if(!Continue)
            {
                break;
            }
            else
            {
                ClearScreen();
                Level = 0;
            }
            
        }
        
        
    }
    
    return 0;
}
