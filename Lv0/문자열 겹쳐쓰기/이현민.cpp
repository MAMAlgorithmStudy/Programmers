#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    // my_string의 시작부터 인덱스 s 까지 추가
    for(int i = 0; i < s; ++i)
    {
        answer += my_string[i];
    }
    // overwrite_string 전체 추가
    for(int i = 0; i < overwrite_string.size(); ++i)
    {
        answer += overwrite_string[i];
    }
    // my_string의 인덱스 s + overwrite_string의 길이 이후 부분 추가
    for(int i = s + overwrite_string.size(); i < my_string.size(); ++i)
    {
        answer += my_string[i];
    }
    return answer;
}
