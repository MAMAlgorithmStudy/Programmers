#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 1;
    int i = 1;
    while(n != i){
        answer++;
        while(1){
            if(answer%3 == 0 || (to_string(answer).find("3") != string::npos))
                answer++;
            else break;
        }
        i++;
    }
        
    return answer;
}
