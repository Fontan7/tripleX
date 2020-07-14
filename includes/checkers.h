using namespace std;
using std::string; 

bool RespCheck(string ResponseStr, string CorrectValue)
{
    if(ResponseStr.compare(CorrectValue) == 0)
    {
        std::cin.clear();
        std::cin.ignore();

        return 1;
    }
    std::cin.clear();
    std::cin.ignore();
   
    return 0;
}

bool PannelCheck(int A, int B, int C, string CorrectValue)
{  
    string rA = to_string(A);
    string rB = to_string(B);
    string rC = to_string(C);
    string Response = rA + rB + rC;

    if (Response == CodeSumFarenheit && Level == 1)
    {
        SlowPrint("--You are already wise, therefore you will be presented with the ultimate challenge\n\n", 40);
        Level = MaxLevel;

        std::cin.clear();
        std::cin.ignore();
        return 0;
    }
    else if (A + B + C == Sum && A * B * C == Multip && CorrectValue == "")
    {
        std::cin.clear();
        std::cin.ignore();
        ClearScreen();
        UsedPannel(true, to_string(UCodeA), to_string(UCodeB), to_string(UCodeC));
        SlowPrint("+ Eureka!", 40);
        Sleep(500);

        return 1;
    }
    else if (Response == CorrectValue)
    {

        std::cin.clear(); 
        std::cin.ignore();
        ClearScreen();
        UsedPannel(true, to_string(UCodeA), to_string(UCodeB), to_string(UCodeC));
        SlowPrint("+ Eureka!", 40);
        Sleep(500);

        return 1;
    }

    std::cin.clear(); 
    std::cin.ignore();
    ClearScreen();
    UsedPannel(false, to_string(UCodeA), to_string(UCodeB), to_string(UCodeC));

    return 0;
}

void UpdateVariables()
{
    srand(time(NULL));
    CodeA = (rand() % Level) + Level;
    CodeB = (rand() % Level) + Level;
    CodeC = (rand() % Level) + Level;
    Sum = CodeA + CodeB + CodeC;
    Multip = CodeA * CodeB * CodeC;
    SSum = to_string(Sum);
    SMultip = to_string(Multip);
}

