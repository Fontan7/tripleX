#include <iostream>
#include <string>
#include <ctime>
#include "../includes/globals.h"
#include "../includes/printers.h"
#include "../includes/checkers.h"
#include "../includes/stories.h"

int main()
{
    while(Level <= MaxLevel) //Continues to execute play game until there are no more levels
    {
        UpdateVariables();
        bool LevelComplete = PlayGame(Level);

        if (LevelComplete && Level < MaxLevel) //If the level is cleared and there are more levels to play...
        {
            SlowPrint("\n--Well done.", 90);
            Sleep(1500);
            ++Level;
        }
        else if (Level >= MaxLevel) //If the level is cleared and there are not more levels...
        {
            ClearScreen();
            SlowPrint("  --The greater the obstacle, the more glory in overcoming it.", 80);
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
            Continue = RespCheck(toLower(UserResponseStr), "y");
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
