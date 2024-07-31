#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int ans = number % n + number % m;
    return ans == 0 ? 1 : 0;
}
