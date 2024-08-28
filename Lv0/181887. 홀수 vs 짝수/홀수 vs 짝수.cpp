#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd = 0;
    int even = 0;
    
    for(int i = 0; i< num_list.size(); i+=2) // 인덱스0 = 1번이므로
    {
        odd += num_list[i];
    }
    for(int i = 1; i< num_list.size(); i+=2)
    {
        even += num_list[i];
    }
    answer = max(odd, even);
    
    return answer;
}