#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(b>a){
        for(long long i = a; i<=b; i++){
            answer += i;
        }
    }
    else{
        for(long long i = b; i<=a; i++){
            answer += i;
        }
    }
    return answer;
}
