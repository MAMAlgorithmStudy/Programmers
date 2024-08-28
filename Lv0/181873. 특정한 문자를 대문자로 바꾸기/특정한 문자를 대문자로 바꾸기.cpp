#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    
    for(char ch : my_string)
    {
        if(ch == alp[0])
            ch = toupper(ch);
        answer += ch;
    }
    
    return answer;
}