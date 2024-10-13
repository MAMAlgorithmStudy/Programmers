#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    for(int i = 0; i < arr.size(); ++i)
    {
        while (!stk.empty() && stk.back() >= arr[i]) {
            stk.pop_back();
        }
        stk.push_back(arr[i]);
    }
    return stk;
}
