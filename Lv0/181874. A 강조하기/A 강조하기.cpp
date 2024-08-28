#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto& ch : myString)
    {
        if(ch == 'a')
            ch = 'A';
        else if(ch > 'A' && ch <= 'Z') // A가 아닌 모든 대문자
            ch = tolower(ch);
        
        answer += ch;
    }
    
    return answer;
}