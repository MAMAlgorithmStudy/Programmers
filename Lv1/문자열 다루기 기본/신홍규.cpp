#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length() != 4 && s.length() != 6){
        answer = false;
    }
    for(auto c : s){
        if(c < '0' || c >'9') answer = false;
    }
    return answer;
}
