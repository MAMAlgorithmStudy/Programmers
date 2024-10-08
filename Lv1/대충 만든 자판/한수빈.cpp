#include <string>
#include <vector>
#include <limits.h> // for INT_MAX

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    // targets의 각 원소의 각 수를 keymap의 모든 원소에서 몇 번째 수인지 배열에 담음
    // 그 배열 안에서 최소값 찾고, 그 값을 result에 더함
    for(int i=0; i<targets.size(); i++)
    {
        int num = 0;  // 각 target의 총 키 조작 횟수
        bool found = true;
        
        for(char c: targets[i])
        {
            int minIndex = INT_MAX;  // 해당 문자의 최소 index
            
            for(string str: keymap)
            {
                int index = str.find(c);
                if (index != string::npos) 
                    minIndex = min(minIndex, index + 1); // 최소값 추적 (1-based index)
            }
            if (minIndex == INT_MAX) {
                found = false;  // 해당 문자가 keymap에 없으면 실패
                break;
            }
            num += minIndex;
        }
        if(!found)
            answer.push_back(-1);
        else
            answer.push_back(num);
    }
    
    return answer;
}
