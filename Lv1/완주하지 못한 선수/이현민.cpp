#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> participant_map;
    
    for(auto name : participant)
    {
        participant_map[name]++;
    }
    for(auto name : completion)
    {
        participant_map[name]--;
    }
    for(auto it = participant_map.begin(); it != participant_map.end(); ++it)
    {
        if(it->second > 0)
         return it->first;
    }
}
