#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 1;
    int cross = 2;
    // answer에 2를 k번 더함
    // 만약에 answer에 +2를 했을 때 마지막 사람을 넘어가면
    // 넘어간 만큼 첫 사람으로 돌아가서 계산
    
    for(int i = 0 ; i< k-1; i++){
        if(answer + cross > numbers.size()){
            answer = (answer+cross) - numbers.size();
            continue;
        }
        answer += cross;
    }
    return answer;
}
