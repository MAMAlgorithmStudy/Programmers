#include <string>
#include <vector>

using namespace std;

string divideString(string s)
{
    char x = s[0];
    int notX = 0;
    int isX = 0;
    string temp = "";
    
    for(int i = 0; i <s.length(); i++)
        if(isX != 0 && isX == notX) temp+=s[i];
        else
            if(s[i] == x) isX++;
            else notX++;
    return temp;
}

int solution(string s) {
    int answer = 0;
    string s_temp = s;
    while(s_temp.length() >= 1)
    {
        answer++;
        s_temp = divideString(s_temp);
    }
    return answer;
}
