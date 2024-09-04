#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    if((a&1) && (b&1)) // 둘 다 홀수라면
        answer = a*a + b*b;
    else if(!(a&1) && !(b&1)) // 둘 다 짝수라면
        answer = abs(a-b);
    else
        answer = 2*(a+b);
    
    return answer;
}
