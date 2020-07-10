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
    int Z = A + B + C;
    string rA = to_string(A);
    string rB = to_string(B);
    string rC = to_string(C);
    string Response = rA + rB + rC;
    std::cout << Response;

    if (Z == CodeSumFarenheit)
    {
        Level = 2;
        return true;
    }
    else if (Response == CorrectValue)
    {
        return true;
    }

    return false;
}
