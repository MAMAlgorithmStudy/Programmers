#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    sort(d.begin(),d.end());
    int count = 0;
    int sum = 0;
    for(auto n : d){
        if(sum+n > budget){
            break;
        }
        sum += n;
        count++;
    }
    return count;
}
