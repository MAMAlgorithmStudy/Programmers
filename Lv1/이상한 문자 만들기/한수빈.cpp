#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    int a = 0;
    
    for(auto& c : s)
    {
        if(!(a&1)) // 짝수이면
            answer += toupper(c); // 대문자로
        else // 홀수이면
            answer += tolower(c); // 소문자로
        a++;
        if(c == ' ') // 공백이면
        {   
            a = 0; //0으로 초기화
        }
    }
    
    return answer;
}
