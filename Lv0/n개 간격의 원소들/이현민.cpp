#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    
    for(int i = 0; i < num_list.size(); i+=n) // n간격으로 인덱스 이동
    {   
        answer.push_back(num_list[i]);
    }
    return answer;
}
