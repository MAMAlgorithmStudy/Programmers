#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int n = 0; n < queries.size(); ++n)
    {
        int s = queries[n][0];
        int e = queries[n][1];
        int k = queries[n][2];
        
        int min_val = 1000000;
        
        for(int i = s; i <= e; ++i)
        {
            if(arr[i] > k ) min_val = min(min_val, arr[i]);
        }
        
        if(min_val == 1000000) answer.push_back(-1);
        else answer.push_back(min_val);
    }
    return answer;
}
