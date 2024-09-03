#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    while(n != 0)
    {
        answer += n % 10; // 1의 자리수 더하기
        n /= 10; // 정수부분을 n으로 변환
    }

    return answer;
}
