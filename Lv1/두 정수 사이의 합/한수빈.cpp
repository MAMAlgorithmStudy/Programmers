#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a <= b)
    {
        for(int i=a; i<=b; i++)
            answer += (long long)i;
    }
    else
    {
        for(int i=b; i<=a; i++)
            answer += (long long)i;
    }
    
    return answer;
}
