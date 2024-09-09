#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;

        while (n > 1 && answer <= 500)
        {
            if (n%2 == 0)
            {
                n /= 2;
            }
            else
            {
                n *= 3;
                n += 1;
            }
            answer++;
        }
    if (answer == 501)
        return answer = -1;        
    
    return answer;
}
