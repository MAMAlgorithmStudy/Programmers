#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(int j = 0; j < queries.size(); ++j)
    {
        int s = queries[j][0];
        int e = queries[j][1];
        int k = queries[j][2];
        for(int i = s; i <= e; ++i)
        {
            if(i%k == 0) arr[i]++;
        }
    }
    return arr;
}
