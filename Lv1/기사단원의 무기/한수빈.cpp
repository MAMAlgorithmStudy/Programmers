#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    // 기사 번호 약수 개수에 해당하는 공격력 무기
    // 만약 제한수치보다 크다면, 협약기관에서 정한 수치의 공격력 무기
    // 공격력 1당 1kg
    for(int i=1; i<= number; i++)
    {
        int num=0; // 약수 개수
        // 약수의 개수 구하기
        for(int j=1; j<= sqrt(i); j++)
        {
            if(i%j == 0)
            {    
                num++;
                if(j != i/j) // 절반만 검사하므로 반대쪽 수도 약수 개수에 넣어야 하므로
                    num++;
            }
        }
        // 만약, limit보다 크다면, power로 설정
        if(num > limit)
            num = power;
        // 크지 않다면, 그대로 약수 개수로
        // 모두 answer에 더하기
        answer += num;
    }
    
    return answer;
}
