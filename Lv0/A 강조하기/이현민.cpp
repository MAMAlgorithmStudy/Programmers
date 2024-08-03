#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    // 입력된 문자열의 각 문자들 순회
    for(char ch : myString)
    {
		    
        if(ch == 'a') // 소문자 a일 경우 대문자 A 결과값에 추가
        {
            answer += "A";
        }
        else if(ch == 'A') // 대문자 A 그대로 결과값에 추가
        {
            answer += ch;
        }
        else // 나머지 문자들 대문자에서 소문자로 변환
        {
            answer += tolower(ch);
        }
    }
    return answer;
}

int main() {
    string test1 = "abstract algebra";
    string result1 = solution(test1);
    printf("%s\n", result1.c_str()); // 출력 : AbstrAct AlgebrA

    string test2 = "PrOgRaMmErS";
    string result2 = solution(test2);
    printf("%s\n", result2.c_str()); // 출력 : progrAmmers
  
    string test3 = "AaBbCc";
    string result3 = solution(test3);
    printf("%s\n", result3.c_str()); // 출력 : AAbbcc

    return 0;
}
