#include <string>
#include <vector>

using namespace std;
// n=짝수 -> n /= 2, n=홀수 -> n = 3*n+1
vector<int> solution(int n) {
    vector<int> answer;
    
    answer.push_back(n);
    
    while(n != 1){
        if(n%2 == 0){
            n /= 2;
            answer.push_back(n);
        }
        else if(n%2 == 1){
            n = 3*n+1;
            answer.push_back(n);
        }
    }
    
    return answer;
}