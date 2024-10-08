#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++)
    {
        if ( k % 2 == 0)
        {
            int a = arr[i] + k;
            answer.push_back(a);
        }else 
        {
            int b = arr[i] * k;
            answer.push_back(b);
        }
    }
    return answer;
}
