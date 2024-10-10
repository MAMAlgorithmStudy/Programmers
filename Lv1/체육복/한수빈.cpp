#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    set<int> setLost(lost.begin(), lost.end());
    set<int> setReserve(reserve.begin(), reserve.end());
    int answer = n-lost.size();
    
    // reserve학생을 모두 돌아서 lost에 있으면 lost랑 reserve에서 제거
    for(auto it=setReserve.begin();it != setReserve.end();)
    {
        if(setLost.find(*it) != setLost.end()) // 있으면
        {    
            answer++;
            setLost.erase(setLost.find(*it));
            it = setReserve.erase(it);
        }
        else
            ++it;
    }

    for(auto l=setLost.begin(); l != setLost.end();)
    {   // prev랑 next는 reserve의 iterator
        auto prev = setReserve.find(*l - 1); 
        auto next = setReserve.find(*l + 1);
        
        if(prev != setReserve.end()) // 이전 번호가 있으면
        {
            answer++; // 빌림
            setReserve.erase(prev);// reserve에서 삭제
            l = setLost.erase(l);// lost에서도 삭제하고 lost의 iterator 위치 바꿈
        }
        else if(next != setReserve.end()) // 다음 번호가 있으면
        {
            answer++;
            setReserve.erase(next);
            l = setLost.erase(l);
        }
        else
            ++l; // 못 빌렸으면 다음 학생 확인
    }
    
    return answer;
}
