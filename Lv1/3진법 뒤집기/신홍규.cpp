#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int n) {
    int remainder;
    string ternaryNumber = "";
    while(n>0){
        remainder = n % 3;
        ternaryNumber = to_string(remainder) + ternaryNumber;
        n /= 3;
    }
    int answer = 0;
    for(int i = 0; i <=ternaryNumber.size()-1; i++){
        answer += (ternaryNumber[i]-'0') * pow(3,i);
    }
    return answer;
}
