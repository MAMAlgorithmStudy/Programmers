#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int x = 1; x < n; x++)
    {
        while(n%x == 1)
        {
            return x;
        }
    }
    return answer;
}
