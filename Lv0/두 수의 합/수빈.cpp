#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    
    // 자릿수를 맞추기 위해 짧은 문자열 앞에 0을 추가
    int lenA = a.length();
    int lenB = b.length();
    
    if (lenA < lenB) {
        a.insert(0, lenB - lenA, '0'); // a가 짧으면 앞에 0을 추가
    } else {
        b.insert(0, lenA - lenB, '0'); // b가 짧으면 앞에 0을 추가
    }
    
    // 올림수를 저장할 변수
    int carry = 0;
    
    // 끝자리부터 두 숫자를 더하기
    for (int i = a.length() - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry; // 각 자리의 숫자와 carry를 더함
        carry = sum / 10;  // 10을 넘으면 다음 자릿수로 올림
        answer.push_back((sum % 10) + '0'); // 결과의 현재 자리수를 저장
    }
    
    // 마지막으로 남은 carry 처리
    if (carry > 0) {
        answer.push_back(carry + '0');
    }
    
    // 결과 문자열이 뒤집혀 있으므로 다시 뒤집기
    reverse(answer.begin(), answer.end());
    
    return answer;
}
