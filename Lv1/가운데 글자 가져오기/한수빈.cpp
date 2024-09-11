#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int i = s.length()/2;
    
    if(s.length()&1) // 홀수
    {    
        answer += s[i];
    }     
    else // 짝수
    {
        answer += s[i-1]; 
        answer += s[i];
    }
    return answer;
}
