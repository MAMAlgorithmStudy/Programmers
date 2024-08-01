#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    // numLog == 	[0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1]	
    // result ==  "wsdawsdassw
    for(int i = 1; i < numLog.size(); ++i) 
    { 
        if(numLog[i] - numLog[i - 1] == 1) answer += 'w';
        // numLog[1] - numLog[1 - 1]
        //    1      -       0       ==  1  // "W" 수에 1을 더한다 -> O  
        else if(numLog[i] - numLog[i - 1] == -1) answer += 's';
        else if(numLog[i] - numLog[i - 1] == 10) answer += 'd';
        else if(numLog[i] - numLog[i - 1] == -10) answer += 'a';
    }
    return answer;
}
