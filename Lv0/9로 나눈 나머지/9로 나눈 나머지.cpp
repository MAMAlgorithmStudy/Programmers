#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    int sum = 0;
  
    
    for(auto S: number)
    {
        int num = S - '0';
        sum += num;
    }
    answer = sum % 9;
    
    return answer;
}