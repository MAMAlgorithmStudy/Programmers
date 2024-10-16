#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for(int i = 0; i < parts.size(); ++i)
    {
        int s = parts[i][0];
        int e = parts[i][1];
        
        // my_strings[i]의 부분 문자열을 추출하여 answer에 추가
        answer += my_strings[i].substr(s, e - s + 1);
    }
    return answer;
}
