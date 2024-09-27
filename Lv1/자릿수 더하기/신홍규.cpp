#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string s = to_string(n);
    int len = s.length();
    
    for(int i = len-1; i >= 0; i--){
        answer += (n / (int)pow(10,i));
        n %= (int)pow(10,i);
    }
    return answer;
}
