#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    
    for(int i=0; i< my_string.length()/m ; i++)
    {
        string part = my_string.substr(m * i, m);
        answer += part[c-1];
    }
    
    return answer;
}