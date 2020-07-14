#include <ctime>
using namespace std;
using std::string;

int Level = 4;
const int MaxLevel = 5;
string UserResponseStr;
string CorrectValueStr;

bool Continue;
bool Agree;
bool Correct = false;
bool LevelCleared;
bool Tried = false;

//Level 1
int UCodeA;
int UCodeB;
int UCodeC;
const int UserSum3 = UCodeA + UCodeB + UCodeC;
const string CodeSumFarenheit = "451";

//Level 2
int CodeA = (rand() % Level) + Level;
int CodeB = (rand() % Level) + Level;
int CodeC = (rand() % Level) + Level;
int Sum = CodeA + CodeB + CodeC;
int Multip = CodeA * CodeB * CodeC;
string SSum = to_string(Sum);
string SMultip = to_string(Multip);