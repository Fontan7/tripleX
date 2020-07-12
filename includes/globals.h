using std::string;

int Level = 0;
const int MaxLevel = 3;
string UserResponseStr;
string CorrectValueStr;

bool Continue;
bool Agree;
bool LevelCleared;

//Level 1
int UserCodeA = 2;
int UserCodeB;
int UserCodeC;
const int UserSum3 = UserCodeA + UserCodeB + UserCodeC;
const string CodeSumFarenheit = "451";

//Level 2
const int CodeA = rand();
const int CodeB = rand();
const int CodeC = rand();