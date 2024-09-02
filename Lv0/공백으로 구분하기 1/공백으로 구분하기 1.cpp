#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string res;
    // 공백이 나오기 전까지 res에 더하다가 공백 나오면 answer에 push_back
    for(int i=0; i<my_string.length(); i++)
    {
        if(my_string.find(" ", i) == i)
        {
            answer.push_back(res);
            res = ""; // 초기화
            continue;
        }
         res += my_string[i];
    }
    answer.push_back(res);
    return answer;
}