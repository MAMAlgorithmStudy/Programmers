#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    // 우선 is_suffix의 길이가 my_string보다 작고
    if (my_string.length() >= is_suffix.length()) 
    {
        // my_string.length() - is_suffix.length() 의 인덱스 ~ 마지막 문자열까지 반환해줌
        // 그 반환해준 문자열이 is suffix와 같다면
        if (my_string.substr(my_string.length() - is_suffix.length()) == is_suffix)
        {
            return 1;
        }
    }
    return 0;
}
