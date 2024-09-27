#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    int idx = 0;
    for(auto b : signs){
        if(b){
            answer += absolutes[idx];
            idx++;
        }
        else {
            answer -= absolutes[idx];
            idx++;
        }
    }
    return answer;
}
