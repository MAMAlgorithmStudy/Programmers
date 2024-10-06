#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0; // 분해한 문자열 개수
    // x와 같다면 int same에 저장, 다르면 int dif에 저장
    // 만약 same == dif라면 answer++ 하고 위 과정 반복
    char x;
    int same = 0, dif = 0;
    bool div = true;
    for(int i=0; i<s.length(); i++)
    {
        if(div)
        {
            x = s[i];
            div = false;
        }
        if(s[i] == x) same++;
        else dif++;
        
        if(i == s.length()-1)
        {
            answer++;
            break;
        }
        if(same == dif)
        {    
            answer++;
            same = 0;
            dif = 0;
            div = true;
        }
    }
    
    return answer;
}
