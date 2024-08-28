#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    // my_string의 뒤에서부터 하나씩 검사, 그 중 is_suffix랑 일치하는 게 있으면 result = 1반환
    for(int i=0; i<my_string.length(); i++)
    {
        if(is_suffix == my_string.substr(i, my_string.length()-i))
            answer = 1;
    }
    
    return answer;
}