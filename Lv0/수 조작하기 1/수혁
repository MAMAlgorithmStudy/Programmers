#include <string>

using namespace std;

int solution(int n, string control) 
{
    // 초기 n의 값을 answer에 복사
    int answer = n;
    
    // control 문자열의 각 문자를 순회
    for(auto key : control)
    {
        // 각 문자에 따라 answer 값을 변경
        if(key == 'w') answer += 1;      // 'w'인 경우 1 증가
        else if(key == 's') answer -= 1; // 's'인 경우 1 감소
        else if(key == 'd') answer += 10; // 'd'인 경우 10 증가
        else if(key == 'a') answer -= 10; // 'a'인 경우 10 감소
    }
    
    // 최종  answer 값을 반환.
    return answer;
}
