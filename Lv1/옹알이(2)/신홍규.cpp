#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    int before = 0;
    bool check = true;
    for(auto s : babbling){
        before = 0;
        check  = true;
        for(int i =0; i<s.length();i++){
            if(s.substr(i,3)=="aya" && before != 1) {
                before = 1;
                i+=2;
            }
            else if(s.substr(i,2)=="ye" && before != 2) {
                before = 2;
                i+=1;
            }
            else if(s.substr(i,3)=="woo" && before != 3) {
                before = 3;
                i+=2;
            }
            else if(s.substr(i,2)=="ma" && before != 4) {
                before = 4;
                i+=1;
            }
            else{
                check = false;
                break;
            }
        }
        if(check == true) answer++;
    }
    return answer;
}
