#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string res;
    // res도 값이 없고 문자열이 공백이면 다음 인덱스로 넘겨버리기, 아니면 res에 붙이고 공백일 때 answer에 추가
    for(int i=0; i<my_string.length(); i++)
    {
        if(my_string[i] == ' ' && res == "")
        {
            continue;
        }
        if(my_string[i] != ' ')
            res += my_string[i];
        if(my_string[i] == ' ' && res != "")
        {
            answer.push_back(res);
            res = "";
        }
    }
    if(res != "") // 넣을 res가 있다면
        answer.push_back(res);
    
    return answer;
}