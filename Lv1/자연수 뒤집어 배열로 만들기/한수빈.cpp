#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str= to_string(n);
    
    for(int i=0; i<str.length(); i++)
    {
        answer.push_back(n%10);
        n /= 10;
    }
    
    return answer;
}
