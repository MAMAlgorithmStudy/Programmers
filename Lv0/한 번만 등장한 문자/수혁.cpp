#include <string> 
#include <vector>  
#include <algorithm>

using namespace std;  

string solution(string s)  
{
    string answer = ""; 


    for(int i = 0; i < s.size(); i++)
    {
        int same = 0;  // 현재 문자의 중복 확인을 위한 변수
        
        for (int j = 0; j < s.size(); j++)
        {
            if(i == j)  // 같은 인덱스는 비교 X
                continue;
            
            if(s[i] == s[j])  // 다른 인덱스에서 동일한 문자가 발견되면
                same++;  // 중복 카운트를 증가시킴
        }
        
        if(same == 0)  // 중복된 적이 없다면 ! 
            answer += s[i];  // answer에 추가  
    }
    
    sort(answer.begin(), answer.end());  // 결과 문자열을 사전 순으로 정렬
    
    return answer; 
    }
