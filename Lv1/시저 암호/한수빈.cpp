#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    
    for(auto& c: s)
    {
        if((c+n > 'Z' && c <= 'Z') || (c+n > 'z' && c >= 'a')) // 'A' + 25 = 'Z'
        {    
            c = c - 26 + n;
            continue;
        }
        if(c == ' ')
            continue;
        c += n;
    }
    
    return s;
}
