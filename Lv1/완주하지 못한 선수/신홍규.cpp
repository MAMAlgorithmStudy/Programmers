#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string,int> m;
    vector<string> v = participant;
    
    v.insert(v.end(),completion.begin(),completion.end());
    
    for(int i = 0; i < v.size(); i++)
    {
        if(m.find(v[i]) == m.end()) m[v[i]] = 1;
        else m[v[i]]++;
    }
    for(auto p : m)
    {
        if(p.second%2 != 0) return p.first;
    }
}
