#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<vector<int>> count(26, vector<int>(2,0)); // 여기에 a부터 z까지 나온 (현재 인덱스정보, 횟수)
    int i =0;
    
    for(auto c: s)
    {
        //만약 이미 1이 있으면, 몇 칸 앞에 같은 문자가 있는지
        if(count[c-'a'][1] == 1)
        {
            int j = count[c-'a'][0];
            answer.push_back(i-j);
            count[c-'a'][0] = i; // 뒤에서 또 같은 문자 나올 수도 있으니 인덱스정보 업데이트
            i++;
        }
        else
        {
            count[c-'a'][0] = i;
            count[c-'a'][1] = 1;
            i++;
            answer.push_back(-1);
        }    
    }
    
    return answer;
}
