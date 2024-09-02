#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for(int n: num_list)
    {
        if(n < 0)
            return answer; // 아래에서 1을 추가하므로 추가 전 answer값을 인덱스로 볼 수 있음
        
         answer++;
    }
    
    return -1;
}