#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer; 
    
    for(auto com: commands)
    {
        int i = com[0];
        int j = com[1];
        int k = com[2];
        // 자르기 (2번째 = 인덱스1)
        vector<int> sub = vector<int>(array.begin()+i-1, array.begin()+j);
        // 오름차순 정렬하기
        sort(sub.begin(), sub.end());
        // 그 중 k번째 수 구하기 (인덱스보다 1큼)
        answer.push_back(sub[k-1]);
    }
    
    return answer;
}
