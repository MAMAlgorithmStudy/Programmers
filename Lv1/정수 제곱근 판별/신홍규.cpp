#include <string>
#include <vector>
#include <cctype> 
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double a1 = sqrt(n);
    long long a2 = (long long)a1;
    if(a1 == a2){
        answer = (a2+1)*(a2+1);
    }
    else answer = -1;
    return answer;

}
