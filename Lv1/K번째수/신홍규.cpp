#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    int first;
    int last;
    int index;
    for(auto command : commands){
        first = command[0]-1;
        last = command[1];
        index = command[2];
        
        temp = vector<int>(array.begin()+first,array.begin()+last);
        
        sort(temp.begin(),temp.end());
        
        answer.push_back(temp[index-1]);
    }
    return answer;
}
