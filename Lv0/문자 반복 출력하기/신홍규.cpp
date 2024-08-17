#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for(auto c : my_string){
        for(int i =0; i <n; i++){
            answer+= c;
        }
    }
    return answer;
}
