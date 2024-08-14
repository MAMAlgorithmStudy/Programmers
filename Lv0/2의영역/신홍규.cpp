#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer;
    int temp = 1;
    for(int i = 1; i <=10; i++){
        temp *= i;
        if(temp <= n) answer = i;
    }
    return answer;
}
