#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); ++i)
    {
        int a = arr[i];
        for(int j = a; j >= 1; --j) answer.push_back(arr[i]);
    }
    return answer;
}
