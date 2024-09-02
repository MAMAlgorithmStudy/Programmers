#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    bool test = true; // 검사
    
    // 수를 문자열로 바꿔서 split한 뒤 for문으로 하나씩 검사, 5가 꼭 있고 0은 있거나 없거나
    for(int num = l ; num <= r; num++){
        string s = to_string(num); // 문자열로 변환
        for(auto c: s){ // 문자열 한 자리씩 검사
            if(c == '5' || c == '0') //5 아니면 0이어야 함
                test = true;
            else{
                test = false;
                break; // 5, 0 이외의 다른 수가 들어있으면 for문 나감
            }
        }
        if(test == true)
            answer.push_back(num); // 위 for문을 통과하면 해당 num을 answer배열에 저장
    }
    if(answer.size() == 0)
        answer.push_back(-1);

    return answer;
}