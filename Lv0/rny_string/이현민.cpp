#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string result;
    
    // 입력된 문자열의 각 문자를 순회
    for(char ch : rny_string)
    {
        if(ch == 'm') // 문자가 m인 경우 rn을 answer 문자열에 추가
        {
            result += "rn";
        }
        else // 문자가 m이 아닌 경우 원래 문자를 answer 문자열에 추가
        {
            result += ch;
        }
    }
    return result;
}

int main() 
{
    string test1 = "maximum";
    string result1 = solution(test1);
    cout << result1 << endl;  // 출력: rnaxirnurn

    string test2 = "hello";
    string result2 = solution(test2);
    cout << result2 << endl;  // 출력: hello

    string test3 = "minimum";
    string result3 = solution(test3);
    cout << result3 << endl;  // 출력: rninirnurn

    return 0;
}
