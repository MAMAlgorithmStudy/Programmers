#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> temp;
    
    for (auto n : emergency){
        temp.push_back(n);
    }
    sort(temp.begin(),temp.end(),greater<int>());
    for(int i = 0; i<emergency.size(); i++)
    {
        for(int j =0; j<temp.size(); j++){
            if(temp[j] == emergency[i]){
                answer.push_back(j+1);
                break;
            }
        }
    }
    return answer;
}
