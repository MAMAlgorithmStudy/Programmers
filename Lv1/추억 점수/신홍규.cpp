#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    int score = 0;
    for(auto v : photo)
    {
        score = 0;
        for(int i = 0 ; i < name.size(); i++)
        {
            if(find(v.begin(),v.end(),name[i])!=v.end())
            {
                score += yearning[i];
            } 
        }
        answer.push_back(score);
    }
    return answer;
}
