#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int solution(vector<int> numbers) {
    vector<int> OneToTen = {1,2,3,4,5,6,7,8,9};
    int answer = 0;
    bool isExist = false;
    for(auto n1 : OneToTen){
        isExist = false;
        for(auto n2 : numbers){
            if(n1 == n2){
                isExist = true;
            }
        }
        if(isExist) continue;
        answer += n1;
    }
    return answer;
}
