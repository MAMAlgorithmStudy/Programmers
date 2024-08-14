#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) 
{  
    string answer = my_string;


    // s부터 e까지의 인덱스 범위를 역순으로 바꾸기 위해 반복문 사용
    // i는 0부터 e - s까지 증가
    // s = 2, e = 4 
    // i = 0, 1, 2
    for(int i = 0; i < e - s + 1; i++)
    {
        answer[s + i] = my_string[e - i];
        // my_string의 e - i 위치의 문자를 answer의 s + i 위치에 대입
        // 예를 들어 s = 2, e = 4인 경우, 
        // my_string의 4번째 문자를 answer의 2번째 위치에
        // my_string의 3번째 문자를 answer의 3번째 위치에
        // my_string의 2번째 문자를 answer의 4번째 위치에 대입
    }

    return answer;
}
