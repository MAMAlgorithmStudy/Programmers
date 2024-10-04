#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    int count = 1;
    vector<int> arr;
    for(int i = 1 ; i <= number; i++){
        for(int j = 1; j<=i/2; j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count>limit) answer+=power;
        else answer+=count;
        count = 1;
    }
    return answer;
}
