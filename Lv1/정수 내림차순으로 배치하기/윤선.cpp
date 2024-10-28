#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string num = to_string(n);

    sort(num.begin(), num.end(), greater<char>());
    answer = stoll(num);

    return answer;
}
