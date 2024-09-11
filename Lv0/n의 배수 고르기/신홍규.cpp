#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    for(auto a : numlist){
        if(a%n ==0){
            answer.push_back(a);
        }
    }
    return answer;
}
