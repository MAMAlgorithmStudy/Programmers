#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(int i= n; i < num_list.size(); i++) // n번째 원소 이후의 원소들을 먼저 추가
    {
        answer.push_back(num_list[i]);
    }
    for(int i = 0; i < n; i++) // n번째까지의 원소들을 뒤에 추가
    {
        answer.push_back(num_list[i]);
    }
    return answer;
}
