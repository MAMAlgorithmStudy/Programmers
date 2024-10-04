#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    int count = 0;
    int rest;
    for(int l = i; l<=j; l++){
        int num = l;
        while(num > 0){
            rest = num%10;
            num /= 10;
            if(rest == k) {
                answer++;
            }
        }
    }
    return answer;
}
