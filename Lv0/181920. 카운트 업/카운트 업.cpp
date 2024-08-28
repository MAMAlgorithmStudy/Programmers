#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;
    
    int cnt = start_num;
    
    while(cnt <= end_num)
    {
        answer.push_back(cnt);
        cnt++;
    }
    
    return answer;
}