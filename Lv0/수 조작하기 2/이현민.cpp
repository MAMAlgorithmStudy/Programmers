#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    const int w = 1;
    const int s = -1;
    const int d = 10;
    const int a = -10;    
    for(int i = 0; i < numLog.size() -1; ++i)
    {
        int sub = numLog[i+1] - numLog[i];
        if(sub == w) answer += 'w';
        else if(sub == s) answer += 's';
        else if(sub == d) answer += 'd';
        else if(sub == a) answer += 'a';
    }
    return answer;
}
