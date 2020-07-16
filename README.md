# TripleX

Learning c++ beginner terminal game.

If you want to play it; Go to main -> triplex.exe -> download -> press Run anyway on windows when prompted.

Tutorial:
  
   How to answer y/n questions;
  Just press y (for yes) or n (for no) and press enter. DO NOT type "yes" or "no".

 How to answer "pannel" questions;
  Type in single digit numbers spaced with one space stroke or one enter in between.
  Letters are not allowed and will result in a 0 value to the pannel and a wrong answer.

 If you want to add your own story is easy there are just a few things to keeep in mind;
  +Remember to update the total number of levels in the variable "MaxLevel" located in globals.h
  +Add a new case for each new level at the function "PlayGame" at stories.h
  +Add your new levels at stories.h, use levels already done there as an example.
  +There are a few easy functions available straight away in stories.h;

    # ClearScreen()
    # Print(string)
    # SlowPrint(string, int)
    # ChangeColor(int)
    # to_lower(string)
    # Sleep(int)
    # EmptyPannel()
    # UsedPannel(bool, string, string, string)
    # PannelCheck(int, int, int, string))
    # RespCheck(string, string)
    # UpdateVariables()
    # AcsiiArt()
    # Tutorial()
