#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> real_lost; // 실제로 도난당한 학생
    
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    // 여벌 체육복을 가진 학생이 도난당한 경우 체육복을 빌릴 필요가 없으므로 reserve에서 제거
   for(int l : lost)
   {
       if(find(reserve.begin(), reserve.end(), l) != reserve.end())
       {
           reserve.erase(find(reserve.begin(), reserve.end(), l));
       }
       else
       {
           real_lost.push_back(l);
       }
   }
    // 체육복 빌리기
    for(int l : real_lost)
    {
        // 앞번호 학생이 여벌을 가지고 있는지 확인
        if(find(reserve.begin(), reserve.end(), l - 1) != reserve.end())
        {
            reserve.erase(find(reserve.begin(), reserve.end(), l - 1));
        }
        // 뒷번호 학생이 여벌을 가지고 있는지 확인
        else if(find(reserve.begin(), reserve.end(), l + 1) != reserve.end())
        {
            reserve.erase(find(reserve.begin(), reserve.end(), l + 1));
        }
        else n--;
    }
    return n;
}
