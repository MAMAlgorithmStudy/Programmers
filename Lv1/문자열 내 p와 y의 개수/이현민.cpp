#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'p') p++;
        else if(s[i] == 'y') y++;
    }
    return p == y ? true : false;
}
