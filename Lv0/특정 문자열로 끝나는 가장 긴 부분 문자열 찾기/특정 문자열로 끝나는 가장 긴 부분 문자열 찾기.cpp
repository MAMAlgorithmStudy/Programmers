#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int j = myString.size()-1;
    
    for(int i=myString.size()-1; i>=0; i--)
    {
        if(myString[i] == pat[pat.size()-1])
        {    
            j = i;
            break;
        }
    }
    for(int i = 0; i<=j; i++)
        answer += myString[i];
    
    return answer;
}