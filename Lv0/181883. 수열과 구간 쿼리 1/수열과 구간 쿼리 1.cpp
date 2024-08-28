#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(auto q: queries)
    {
        for(int i = q[0]; i<=q[1]; i++)
        {
            arr[i]++;
        }
    }
    answer = arr;
    return answer;
}