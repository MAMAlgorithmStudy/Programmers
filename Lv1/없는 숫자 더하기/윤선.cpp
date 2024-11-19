#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    int ans = 0;
    int sum = 0;
    for (int i = 0 ; i < numbers.size() ; i++)
    {
        sum += numbers[i];
        ans = 45 - sum;
    }
    return ans;
}
