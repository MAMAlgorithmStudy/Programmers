#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> mPart;
    // participant 명단을 하나씩 돌면서 completion에 있으면 map<string, int>에 사람 수 증가 (동명이인이면 2이상 됨)
    // map의 1이상인 값을 answer에 return
    for(auto p: participant)
    {
        mPart[p]++;
    }
    for(auto c: completion)
    {
        mPart[c]--;
    }
    for(auto it=mPart.begin(); it != mPart.end(); it++)
    {
        if((*it).second > 0)
            answer = (*it).first;
    }
    
    return answer;
}
