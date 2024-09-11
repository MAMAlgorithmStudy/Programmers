#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int div = 0; //약수
    
    for(int i=left; i<=right; i++)
    {
        for(int j=1; j<=i; j++) // 약수 구하기
        {
            if(i % j == 0)
                div++;
        }
        if(div & 1) // 약수 개수가 홀수
            answer -= i;
        else // 짝수
            answer += i;
        
        div = 0; //div 개수 초기화
    }
    
    return answer;
}
