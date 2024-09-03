#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    
    for(int i = 0; i <num_str.length(); i++)
    {
        answer += num_str[i] - '0';        
    }
    //while(n > 0){
    //    answer += n % 10;
    //    n = n / 10;
    //}
    return answer;
}
