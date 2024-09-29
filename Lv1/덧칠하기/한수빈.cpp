#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int last = 0;
    // 1m 구역은 n개, 롤러 길이 m미터 
    // answer++한 뒤 section[0] + m 했을 때, section[i]가 이 안에 포함되면 그냥 넘어감
    // 포함되지 않으면 answer++한 뒤 section[i] + m해서 똑같이 반복
    for(int i=0; i<section.size(); i++)
    {
        if(section[i] <= last)
            continue;
        last = section[i]+m-1;
        answer++;
    }
    
    return answer;
}
