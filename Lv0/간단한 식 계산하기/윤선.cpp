#include <string>
#include <vector>
#include <sstream>

using namespace std;


int solution(string binomial) {
    int answer = 0;
    int a, b;
    char op;
    stringstream ss(binomial);
    ss >> a >> op >> b; 
    switch(op) {
        case '+' :
            return a + b;
        case '-' : 
            return a - b;
        case '*' :  
            return a * b;
        default:
            return 0;
            
    }  
    return answer;
}
