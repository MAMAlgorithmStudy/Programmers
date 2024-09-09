#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string str = "";
        for(int i = 0; i < myString.size(); ++i)
        {
            if(myString[i] == 'A') str += 'B';
            else str += 'A';
        }
    return str.find(pat) == string::npos ? 0 : 1;
}
