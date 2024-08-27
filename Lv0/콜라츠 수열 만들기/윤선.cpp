#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    while(n != 1)
    {
        if (n%2 == 0)
        {
            n = n / 2;
        }else{
            n = 3 * n + 1;
        }
        answer.push_back(n);
    }
    return answer;
}
