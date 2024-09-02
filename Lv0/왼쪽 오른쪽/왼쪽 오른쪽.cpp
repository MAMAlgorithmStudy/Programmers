#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    for(int i=0; i<str_list.size(); i++)
    {
        // "l"이 먼저 나올 경우 -> 앞쪽 문자열 전부 return
        if(str_list[i] == "l")
        {
            answer.assign(str_list.begin(), str_list.begin()+i);
            return answer;
        }
        // "r"이 먼저 나올 경우 -> 뒤쪽 문자열 전부 return
        if(str_list[i] == "r")
        {
            answer.assign(str_list.begin()+i+1, str_list.end());
            return answer;
        }
    }
    return answer; // 빈 리스트 return
}