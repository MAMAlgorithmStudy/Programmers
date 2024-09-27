#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = num;
    int count = 0;
    while(answer != 1){
        count++;
        if(answer%2 == 0){
            answer = answer / 2;
        }
        else if (answer%2 == 1){
            answer = answer * 3 + 1;   
        }
        if(count == 500) {
            count = -1;
            break;
        }
    }
    return count;
}
