#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    // HOF를 크기가 k이며 모든 원소가 2001인 deque로 초기화
    deque<int> HOF(k,2001);    
    
    int count = 0;
    for(int i = 0; i < score.size(); i++){
        // 명예의 전당이 꽉차지 않았다면 
        if(count < k){
            count++;
            // 그냥 push_back
            HOF.push_back(score[i]);
        }
        // 꽉차있다면
        else {
            // 만약 HOF의 맨 앞 요소가 현재 값보다 작다면
            if(HOF.front() < score[i]){
                HOF.pop_front();
                HOF.push_front(score[i]);
            }
        }
        // HOF를 오름차순으로 정렬
        sort(HOF.begin(),HOF.end());
        // HOF의 첫 번째 요소를 push_back
        answer.push_back(HOF.front());
    }
    return answer;
}
