#include <string>
#include <vector>

using namespace std;


int solution(vector<int> absolutes, vector<bool> signs) 
{
    int answer = 0; // 실제 정수들의 합 저장

    for(int i = 0; i < absolutes.size(); i++) 
    {
        // signs[i]가 false일 때
        if(!signs[i]) 
        {
            absolutes[i] *= -1; // 절댓값에 -1을 곱해 음수로 변환
        }
        
        answer += absolutes[i]; 
    }


    return answer;
}
