#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int temp;
    
    if(num%2 == 1){
        temp = total/num - num/2;
        for(int i =0; i<num; i++){
            answer.push_back(temp);
            temp+=1;
        }
    }
    else {
        temp = total/num - num/2 +1;
        for(int i =0; i<num; i++){
            answer.push_back(temp);
            temp+=1;
        }
    }
    return answer;
}
