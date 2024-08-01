#include <string>
#include <vector>
#include <cctype> // toupper 함수 사용, 헤더 추가

using namespace std;

string solution(string my_string, string alp) {
    char target = alp[0]; // alp는 한 글자이므로 첫 번째 글자를 char로 저장
    string answer = "";
    for(char ch : my_string) // 입력된 문자열의 각 문자들 순회
    {
        if(ch == target)
        {
            answer += toupper(ch); // alp에 해당하는 글자를 대문자로 변환하여 추가
        }
        else // 그렇지 않다면 원래 글자 추가
        {
            answer += ch;
        }
    }
    return answer;
}

int main() {
    string test1 = "hello world";
    string result1 = solution(test1, "o");
    printf("%s\n", result1.c_str());  // 출력: hellO wOrld

    string test2 = "programmers";
    string result2 = solution(test2, "r");
    printf("%s\n", result2.c_str());  // 출력: pRogRammeRs

    return 0;
}
