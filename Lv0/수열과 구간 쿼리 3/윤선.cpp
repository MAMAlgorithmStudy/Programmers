#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (auto i : queries)
    { 
        int a = arr[i[0]];
        arr[i[0]] = arr[i[1]];
        arr[i[1]] = a;
    }
    return arr;
}
