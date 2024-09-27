#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a,string b, int n) {
    if (a[n] == b[n]) {
        return a < b;
    }
    return a[n] < b[n];
}

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(), [n](string a, string b) {
        return compare(a, b, n);
    });
    return strings;
}
