#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int smaller = n>m? m : n;
    int bigger = n>m? n : m;
    for(int i = smaller; i>=1; i--){
        if(n%i ==0 && m%i ==0){
            answer.push_back(i);
            break;
        }
    }
    for(int i = bigger; i <= n*m; i++){
        if(i%n ==0 && i%m ==0){
            answer.push_back(i);
            break;
        }
    }
    return answer;
}
