
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    // 결과를 저장할 변수 answer를 -1로 초기화 (찾지 못한 경우 반환할 값)
    int answer = -1;
    
   
    for(int t = idx; t < arr.size(); ++t) 
    {
        // 현재 인덱스 t의 값이 1인지 확인
        if(arr[t] == 1) 
        {
            // 값이 1인 경우 answer에 현재 인덱스 t를 저장
            answer = t;
            break;
        }
    }
    // 1인 값을 찾지 못했다면 -1
    return answer;
}
