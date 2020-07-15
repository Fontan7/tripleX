#include <windows.h>
#include <algorithm>
#include <cctype>
using std::string; 

void Print(std::string str)
{
    std::cout << str;
}

void SlowPrint(std::string str, int delay_time) 
{
    for (int i = 0; i != str.size(); ++i) 
    { 
        std::cout << str[i];
        Sleep(delay_time);
    }

}

string toLower(string Input)
{
    std::string data = Input;
    std::transform(data.begin(), data.end(), data.begin(),
    [](unsigned char c){ return std::tolower(c); });

    return data;
}

void ChangeColor(int desiredColor)//7 is white 12 is red
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor);
}

void ClearScreen(char fill = ' ') {
    COORD tl = { 0,0 };
    CONSOLE_SCREEN_BUFFER_INFO s;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(console, &s);
    DWORD written, cells = s.dwSize.X * s.dwSize.Y;
    FillConsoleOutputCharacter(console, fill, cells, tl, &written);
    FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
    SetConsoleCursorPosition(console, tl);
}

void UsedPannel(bool Correct, string A, string B, string C)
{
    if(!Correct)
    {
        Print("\n ________\n");
        ChangeColor(12);
        Print(" | "+ A +"-"+ B +"-"+ C +" |\n");
        ChangeColor(7);
        Print(" |_9_8_7_|\n");
        Print(" |_6_5_4_|\n");
        Print(" |_3_2_1_|\n");
        Print(" |___0___|\n\n");
    }
    else
    {
        Correct = false;

        Print("\n ________\n");
        ChangeColor(11);
        Print(" | " + A + "-" + B + "-" + C + " |\n");
        ChangeColor(7);
        Print(" |_9_8_7_|\n");
        Print(" |_6_5_4_|\n");
        Print(" |_3_2_1_|\n");
        Print(" |___0___|\n\n");      
    }
    
}

void EmptyPannel()
{
    Print("\n ________\n");
    ChangeColor(11);
    Print(" | 0-0-0 |\n");
    ChangeColor(7);
    Print(" |_9_8_7_|\n");
    Print(" |_6_5_4_|\n");
    Print(" |_3_2_1_|\n");
    Print(" |___0___|\n\n");   
    Print(" --Code: ");
}

void Tutorial()
{
    Print("\n\n How to answer y/n questions;\n  Just press y (for yes) or n (for no) and press enter. DO NOT type \"yes\" or \"no\".\n\n");
    Print(" How to answer \"pannel\" questions;\n  Type in single digit numbers spaced with one space stroke or one enter in between.\n");
    Print("  Letters are not allowed and will result in a 0 value to the pannel and a wrong answer.\n\n");
    Print(" If you want to add your own story is easy there are just a few things to keeep in mind;\n");
    Print("  +Remember to update the total number of levels in the variable \"MaxLevel\" located in globals.h\n");
    Print("  +Add a new case for each new level at the function \"PlayGame\" at stories.h\n");
    Print("  +Add your new levels at stories.h, use levels already done there as an example.\n");
    Print("  +There are a few easy functions available straight away in stories.h; \n\n");
    Print("    # ClearScreen()\n");
    Print("    # Print("); ChangeColor(11); Print("string"); ChangeColor(7); Print(")\n");
    Print("    # SlowPrint("); ChangeColor(11); Print("string, "); ChangeColor(10); Print("int"); ChangeColor(7); Print(")\n");
    Print("    # ChangeColor("); ChangeColor(10); Print("int"); ChangeColor(7); Print(")\n");
    Print("    # to_lower("); ChangeColor(11); Print("string"); ChangeColor(7); Print(")\n");
    Print("    # Sleep("); ChangeColor(10); Print("int"); ChangeColor(7); Print(")\n");
    Print("    # EmptyPannel()\n");
    Print("    # UsedPannel("); ChangeColor(12); Print("bool, "); ChangeColor(11); Print("string, string, string"); ChangeColor(7); Print(")\n");
    Print("    # PannelCheck("); ChangeColor(10); Print("int, int, int, "); ChangeColor(11); Print("string)"); ChangeColor(7); Print(")\n");
    Print("    # RespCheck("); ChangeColor(11); Print("string, string"); ChangeColor(7); Print(")\n");
    Print("    # UpdateVariables()\n");
    Print("    # AcsiiArt()\n");
    Print("    # Tutorial()\n");

    SlowPrint("\n\n  Press anything and enter when DONE", 60);
    std::cin >> UserResponseStr;
    
    ClearScreen();
}

void AcsiiArt()
{
    //namespace :: property
    ChangeColor(12);
    std::cout << "\n\n";
    std::cout << "   &&&&&&&&&&                                                     &&           && \n";
    std::cout << "   &&&&&&&&&&  |&&&&&&&     |&  |&&&&&&&    |&        |&&&&&&&       &       &    \n";
    std::cout << "       &|      |&      &        |&      &   |&        |&               &   &      \n";
    std::cout << "       &|      |&&&&&&&     |&  |&&&&&&&    |&        |&&&&&&            @        \n";
    std::cout << "       &|      |& &         |&  |&          |&        |&               &   &      \n";
    std::cout << "       &|      |&   &       |&  |&          |&        |&             &       &    \n";
    std::cout << "       &|      |&     &     |&  |&          |&&&&&&&  |&&&&&&&    &&           && \n";
    ChangeColor(7);
    Print("                             ");
    SlowPrint("Game by Nahuel Fontan\n", 40);
}