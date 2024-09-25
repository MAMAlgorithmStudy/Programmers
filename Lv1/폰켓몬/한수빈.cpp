#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> mon(nums.begin(), nums.end());
    
    answer = min(mon.size(), nums.size()/2);
    
    return answer;
}
