#include <ctime>
using namespace std;
using std::string;

int Level = 1;
const int MaxLevel = 3;
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
const int CodeA = rand() % Level + Level;
const int CodeB = rand() % Level + Level;
const int CodeC = rand() % Level + Level;

const int Sum = CodeA + CodeB + CodeC;
const int Multip = CodeA * CodeB * CodeC;
const string SSum = to_string(Sum);
const string SMultip = to_string(Multip);