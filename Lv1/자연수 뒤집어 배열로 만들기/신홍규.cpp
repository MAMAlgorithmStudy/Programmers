#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(long long n) {
    int ten = 10;
    vector<int> v;
    int len = to_string(n).length();
    for(int i = 0; i<len; i++){
        v.push_back(n%10);
        n /=10;
    }
    return v;
}
