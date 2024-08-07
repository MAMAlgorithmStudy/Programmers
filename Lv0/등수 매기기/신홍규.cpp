#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<int,int> mp;
vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> aver;
    vector<int> temp;
    int cnt = 1;
    
    for(auto a : score){
        aver.push_back((a[0]+a[1]));
        temp.push_back((a[0]+a[1]));
    }
    sort(temp.begin(),temp.end(),greater<>());
    
     for(int i=0; i<temp.size(); i++){
        if(mp.find(temp[i])==mp.end()) mp[temp[i]]=cnt;        
        cnt++;
    }
    
    for(int i=0; i<aver.size(); i++)
        answer.push_back(mp[aver[i]]);
    
    return answer;
}
