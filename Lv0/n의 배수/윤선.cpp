#include <string>
#include <vector>

using namespace std;

int solution(int num, int n) {
    int answer = 0;
    int ans = num % n;
    if (ans == 0)
    {
        return 1;
    }else {
        return 0;
    }
    return answer;
}
