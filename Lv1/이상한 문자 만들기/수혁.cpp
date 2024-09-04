#include <string>  
#include <vector>  

using namespace std;  

string solution(string s) 
{
    string answer = s;  
    int count = 0;  // 단어의 인덱스 추적용


    for(int i = 0; i < answer.length(); i++)
    {

        if(answer[i] == ' ')
        {
		        count = 0;  
        }
              
        else
        {
            // 현재 문자가 제시 된 단어의 짝수번째 알파벳일 경우 (+첫 문자는 0번째로 짝수)
            if(count % 2 == 0)
            {
                answer[i] = toupper(answer[i]);  // 문자를 대문자로 변환            
            }          
            
            else  // 현재 문자가 제시 된 단어의 홀수번째 알파벳일 경우
            {
                answer[i] = tolower(answer[i]);  // 문자를 소문자로 변환            
            }
            count++;  // 다음 문자를 위해 count 증가
        }     
    }

    return answer;  
}
