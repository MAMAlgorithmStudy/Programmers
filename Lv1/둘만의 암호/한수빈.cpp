#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";

    for (char c : s) {
        int cnt = 0;
        char current = c;
        
        while (cnt < index) {
            current++;  // 다음 문자로 이동
            if (current > 'z') {
                current = 'a';  // 'z'를 넘어가면 'a'로 돌아감
            }
            // skip에 있는 문자가 아니면 cnt 증가
            if (skip.find(current) == string::npos) {
                cnt++;
            }
        }
        
        answer.push_back(current);  // 최종 문자를 answer에 추가
    }

    return answer;
}
