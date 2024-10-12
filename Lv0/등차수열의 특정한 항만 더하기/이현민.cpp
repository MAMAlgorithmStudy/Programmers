#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    vector<int> arr;
    int answer = 0;
    for(int i = 0; i < included.size(); ++i)
    {
        arr.push_back(a);
        a += d;
        if(included[i] == true)
        {
            answer += arr[i];
        }
    }
    return answer;
}
