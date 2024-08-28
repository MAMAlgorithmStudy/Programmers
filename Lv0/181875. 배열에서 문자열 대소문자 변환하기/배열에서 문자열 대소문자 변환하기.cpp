#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer(strArr.size());
    
    for(int i=0; i<strArr.size(); i++)
    {
        if(!(i&1)) // 짝수일 경우
        {
            for(char ch : strArr[i])
            {
                ch = tolower(ch);
                answer[i] += ch;
            }
        }
        else if(i&1) // 홀수일 경우
        {
            for(char ch : strArr[i])
            {    
                ch = toupper(ch);
                answer[i] += ch;
            }
        }
    }
    
    return answer;
}