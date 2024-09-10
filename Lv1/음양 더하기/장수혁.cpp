#include <string>
#include <vector>

using namespace std;


int solution(vector<int> absolutes, vector<bool> signs) 
{
    int answer = 0; // 실제 정수들의 합 저장

    // absolutes와 signs의 크기는 같으며, 이 크기만큼 반복합니다.
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
