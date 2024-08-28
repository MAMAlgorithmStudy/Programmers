#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(int i : arr)
    {
        for(int j=0; j<i; j++) // i에 해당하는 수만큼 반복
        {
            answer.push_back(i);
        }
    }
    
    return answer;
}