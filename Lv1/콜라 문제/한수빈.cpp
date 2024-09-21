#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    while (n >= a) {
        int new_bottles = (n / a) * b;  // n개의 병에서 a개의 병을 주고 b개의 새 병을 받음
        answer += new_bottles;          // 새로 받은 음료수 더해줌
        n = (n % a) + new_bottles;      // 남은 병 + 새로 받은 병으로 갱신
    }

    return answer;
}
