#include <string>
#include <vector>
#include <iostream>
using namespace std;

int idx[3];
int answer = 0;

void DFS(vector<int> number, int l, int i) {
    if(i == 3) {
        int sum = 0;
        for(int n : idx){
            sum += number[n];
        }
        if(sum == 0)
            ++answer;
    }
    else {
        for(int j = l; j < number.size(); ++j) {
            idx[i] = j;
            DFS(number, j + 1, i + 1);
        }
    }
}

int solution(vector<int> number) {
    
    DFS(number, 0, 0);
    
    return answer;
}
