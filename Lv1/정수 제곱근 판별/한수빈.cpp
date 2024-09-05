#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    
    long long num = sqrt(n); // 제곱근을 정수형으로 변환
    
    if(sqrt(n) * sqrt(n) != num*num) 
        return -1;
    else
        return (sqrt(n)+1)*(sqrt(n)+1);
}
