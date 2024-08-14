#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    bool isExist = false;
    for(auto c : my_string){
        for(auto a : answer){
            if(c == a){
                isExist = true;
            }
        }
        if(isExist){
            isExist = false;   
            continue;
        }
        else {
            answer +=c;
        }
    }
    return answer;
}
