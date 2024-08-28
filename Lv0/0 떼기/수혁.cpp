#include <string>
#include <vector>

using namespace std;

string solution(string n_str)
{
		// 'n_str'을 정수로 변환 -> 앞에 있는 '0'들을 제거 -> 다시 문자열로 변환
    string answer = to_string(stoi(n_str));
    return answer;
}
