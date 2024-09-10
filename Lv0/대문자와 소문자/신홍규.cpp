#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto c : my_string){
        if(c>='a' && c <= 'z') answer+= toupper(c);
        else if(c >='A' && c<='Z') answer += tolower(c);
    }
    return answer;
}
