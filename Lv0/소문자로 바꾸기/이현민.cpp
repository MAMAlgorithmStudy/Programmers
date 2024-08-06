#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(char ch : myString)
    {
        answer += tolower(ch);
    }
    return answer;
}
