using namespace std;
using std::string; 

bool StringRespCheck(string ResponseStr, string CorrectValue)
{
    if(ResponseStr.compare(CorrectValue) == 0)
    {
        return true;
    }

    return false;
}

bool PannelCheck(int A, int B, int C, string CorrectValue)
{  
    string rA = to_string(A);
    string rB = to_string(B);
    string rC = to_string(C);
    string Response = rA + rB + rC;

    if (Response == CodeSumFarenheit && Level == 1)
    {
        std::cout << "--You are already wise, therefore you will be presented with the ultimate challenge\n\n";
        //Level = MaxLevel;
        return true;
    }
    else if (Response == CorrectValue)
    {
        return true;
    }

    return false;
}

