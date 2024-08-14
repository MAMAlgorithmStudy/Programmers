#include <string>  
#include <vector>  
#include <iostream> 

using namespace std; 


string solution(vector<string> str_list, string ex) 
{
    string answer = "";  

    for (const auto& s : str_list)  //  상수 참조로 받아옴
    {
        // 현재 문자열 s에 ex가 포함되어 있는지 확인, s 안에서 ex가 없으면
        if (s.find(ex) == string::npos)
        {
            answer += s;  // 현재 문자열 + s
        }
    }
    return answer;  
}
