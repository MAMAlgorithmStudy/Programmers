#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(auto n : array)// 배열 순회{
        while(n != 0)// n의 0이 될때까지{
            if(n%10 == 7)// 1의 자리수가 7인지 확인{
                answer ++; // 1의 자리수가 7이라면 카운트
            }
            n/=10; // 1의 자리수 날리기
        }
    }
    return answer;
}
