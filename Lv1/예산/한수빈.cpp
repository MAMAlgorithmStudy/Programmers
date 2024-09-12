#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int sum =0;
    // sort한 뒤, 작은 숫자부터 더하다가 budget보다 커지면 그 때 return   
    sort(d.begin(), d.end());
    for(int i: d)
    { 
        sum += i;
        if(sum > budget)
            return answer;
        answer++;
    }
    return answer;
}
