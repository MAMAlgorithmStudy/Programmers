#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int temp = n;
    char c_temp;
    for(auto c : s){
        c_temp = c;
        temp = n;
        if(c == ' ') answer += c;
        else {
            while(temp != 0){
                if( (c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z') ) c = c +1;
                else if(c == 'z') c = 'a';
                else if(c == 'Z') c = 'A'; 
                temp--;
            }
            answer += c;
        }
    }
    return answer;
}
