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
    Print("--Code: ");
}

void Tutorial()
{


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