#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> temp;
    
    for(int i=0; i< arr.size(); i++)
    {
        if(arr[i] == 2)
            temp.push_back(i);
    }
    if(temp.empty())
        answer.push_back(-1);
    else
        answer = vector<int>(arr.begin()+temp.front(), arr.begin()+temp.back()+1);
    
    
    return answer;
}