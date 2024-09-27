#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    // n(콜라병이) a 미만이 될 때까지 반복
    while(n >= a){
        // n을 a로 나눈거의 b배만큼 콜라병을 얻음
        answer += (n/a)*b;
        // n을 이번에 얻은 콜라 병 수와 바꾸고 남은 병 수를 더한 값으로 갱신해줌 
        n = n/a*b + n%a;
    }
    return answer;
}
