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