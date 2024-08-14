#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    
    for(int num : num_list)
     {
        while(num != 1) 
        {
            if (num % 2 == 0) // 현재 num이 짝수일 때
            {  
                num /= 2;          
            } 
            else // 현재 num이 홀수일 때
            {  
                num = (num - 1) / 2; 
            }
            answer++;  // 나누기가 실행 될때마다 answer 1씩 증가
        }
    }
    
    return answer;  // 모든 요소의 나누기 횟수를 더한 후, 총 횟수를 반환
}
