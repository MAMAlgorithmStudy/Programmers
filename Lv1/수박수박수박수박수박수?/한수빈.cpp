#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    for(int i=0; i<n/2; i++)
        answer += "수박";
    if(n&1)
        answer += "수";
    
    return answer;
}
