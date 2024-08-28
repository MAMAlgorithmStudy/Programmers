#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string str;
    
    for(auto c : myString)
    {
        if(c=='A')
            c++;
        else if(c=='B')
            c--;
        str+=c;
    }
    if(str.find(pat, 0) == string::npos)
        answer=0;
    else 
        answer=1;
    
    return answer;
}