#include <string>
#include <vector>
#include <map>
using namespace std;

map<int,int> m;

int solution(vector<int> array) {
    int answer = 0;
    int freq = -1;
    for(auto n : array){
        if(m.find(n) != m.end()){
            m[n]++;
        }
        else {
            m[n] = 1;
        }
    }
    for(auto it = m.begin(); it != m.end(); it++){
        if(freq == it->second)  answer = -1;
        if(freq < it->second) {
            freq = it->second;
            answer = it->first;
        }
    }
    return answer;
}
