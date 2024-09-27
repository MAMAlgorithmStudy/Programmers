#include <string>

using namespace std;

int solution(string t, string p) {
    int count = 0;
    int p_len = p.length();  // p의 길이를 미리 저장
    
    for (int i = 0; i <= t.length() - p_len; i++) {
        string temp = t.substr(i, p_len);  // t에서 p의 길이만큼 부분 문자열 추출
        
        // temp 문자열이 p 문자열보다 작거나 같은 경우 count 증가
        if (stoll(temp) <= stoll(p)) {
            count++;
        }
    }
    
    return count;
}
