#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int ans = n % 2;
    if (ans == 1)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (i % 2 == 1)
            {
                answer += i;
            }
        }

    } else 
        {
            for(int i = 2; i <= n; ++i)
            {
                if (i % 2 == 0)
                {
                    answer += i * i;
                }
            }

        }
    return answer;
}
