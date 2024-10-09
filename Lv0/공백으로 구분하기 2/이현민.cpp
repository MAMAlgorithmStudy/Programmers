#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    stringstream ss(my_string); // 문자열을 스트림으로 변환
    string word;

    // 공백을 기준으로 문자열을 나누어 벡터에 추가
    while (ss >> word) {
        answer.push_back(word);
    }
    return answer;
}
