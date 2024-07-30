#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int ans = stoi(to_string(a) + to_string(b));
    int s = 2 * a * b;
    if (ans >= s)
    {
        return ans;
    }else
    {
        return s;
    }
    return answer;
}
