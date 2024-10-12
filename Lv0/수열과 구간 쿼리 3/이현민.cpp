#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(int n = 0; n < queries.size(); ++n)
    {
        int i = queries[n][0];
        int j = queries[n][1];
        
        swap(arr[i], arr[j]);
    }
    return arr;
}
