#include <string>
#include <algorithm>  // 이거 추가 안 할거면, 반복문 사용해서 뒤에서부터 하나씩 저장
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    string rev = "";
    
    // 뒤집을 문자열
    rev = my_string.substr(s, e-s+1);
    // 뒤집기
    reverse(rev.begin(), rev.end());
    // result에 안 뒤집은 거 + 뒤집은 거 더하기
    answer = my_string.substr(0, s) + rev + my_string.substr(e+1);
    
    return answer;
}