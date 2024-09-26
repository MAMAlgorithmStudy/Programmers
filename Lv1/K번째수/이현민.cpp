#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int c = 0; c < commands.size(); c++)
    {
        int i = commands[c][0];
        int j = commands[c][1];
        int k = commands[c][2];
        
        // i번째 인텍스부터 j번째 인덱스까지 자른 배열
        vector<int> partArray(array.begin()+i-1, array.begin()+j);
        // 정렬
        sort(partArray.begin(), partArray.end());
        // k번째 숫자 추가 (1-based index이므로 k-1로 접근)
        answer.push_back(partArray[k-1]);
    }
    return answer;
}
