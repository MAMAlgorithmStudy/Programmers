#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    // 중복된 인수를 제거해주는 함수 set
    set<int> mon(nums.begin(), nums.end());
    // 폰켓몬 종류수와 폰켓몬 마리 수/2 보다 작은 값을 구해줌
    answer = min(mon.size(), nums.size()/2);
    
    return answer;
}
