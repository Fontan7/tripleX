#include <iostream>
#include <string>
#include "../includes/globals.h"
#include "../includes/checkers.h"
#include "../includes/printers.h"
#include "../includes/stories.h"

int PlayGame(int Level) //Rcieves the level to play and loads it
{
    switch (Level)
    {
    case 1:
        return LevelCleared = Intro();
        break;
    case 2:
        return LevelCleared = Lvl2();
        break;
    case 3:
        return LevelCleared = Lvl3();
        break;
    default:
        return 0;
        break;
    }
}

int main()
{
    srand(time(NULL)); //Creates a new random sequence based on time used in rand() in globals.h
    while(Level <= MaxLevel) //Continues to execute play game until there are no more levels
    {
        int LevelCleared = PlayGame(Level);
        
        std::cin.clear(); //clears any errors
        std::cin.ignore(); //discards the buffer

        if (LevelCleared && Level < MaxLevel) //If the level is cleared and there are more levels to play...
        {
            SlowPrint("\n--Well done.", 90);
            Sleep(1000);
            ++Level;
        }
        else if (LevelCleared == MaxLevel) //If the level is cleared and there are not more levels...
        {
            SlowPrint("--The greater the obstacle, the more glory in overcoming it.", 90);
            Print("\n\n                      ");
            SlowPrint("Y O U  W I N !", 300);
            Sleep(5000);

            break; //Exits the loop and ends the game 
        }
        else //If you die in a level
        {
            Print("\n\n                      ");
            SlowPrint("Y O U  L O S E\n", 300);
            SlowPrint("                        play again? ", 50);
            std::cin >> UserResponseStr;
            Continue = StringRespCheck(toLower(UserResponseStr), "y");
            if(!Continue)
            {
                break; //Exits the loop and ends the game
            }
            else
            {
                ClearScreen();
                //Level = 0; //Comment or delete this line if you want to start in the same level you died
            }
            
        }
        
    }

    return 0;
}
