#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0); //길이가 52이고 모든 값을 0으로 초기화
    // A부터 Z, a부터 z까지 총 52개
    // 대문자 인덱스는 '문자'-'A'
    // 소문자 인덱스는 '문자' - 'a' + 26 
    for(char c: my_string)
    {
        if(c >= 'A' && c <= 'Z')
            answer[c-'A']++;
        else if(c >= 'a' && c <= 'z')
            answer[c-'a'+26]++;
    }
    
    return answer;
}