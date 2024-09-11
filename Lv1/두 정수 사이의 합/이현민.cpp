#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a == b) return a;
    else if(b > a)
    {
        while(b >= a)
        {
            answer += a;
            ++a;
        }
    }
    else
    {
        while(a >= b)
        {
            answer += b;
            ++b;
        }
    }
    
    return answer;
}
