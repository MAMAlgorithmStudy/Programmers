
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
		// s를 입력 스트림으로 사용
    istringstream ss (s);
    string temp;
    vector<string> v;
    // 이전에 연산했던 수를 저장할 변수
    int prev;
    int answer = 0;
    // 공백 문자를 기준으로 s를 자름
    // 자른 문자열을 temp에 담음
    // getline : 입력스트림에서 구분 기호(' ')를 기준으로 문자열(temp)에 집어넣음
    // EOF를 반환하기 전까지 반복
    while(getline(ss,temp,' ')){
        v.push_back(temp);
    }
    for(auto s : v){
		    // s가 "Z"라면
        if(s.compare("Z")==0){
			       // 이전 문자열을 뺌
            answer -= prev;
        }
        else {
		        // s를 정수로 바꿔 answer에 더해줌
            answer+=stoi(s);
            // 다음 반복으로 넘어가기 전에 현재의 s를 저장
            prev = stoi(s);
        }
    }
    return answer;
}
