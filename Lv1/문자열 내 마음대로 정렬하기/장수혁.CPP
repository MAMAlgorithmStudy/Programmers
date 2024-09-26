
#include <string> 
#include <vector> 

using namespace std;  


vector<string> solution(vector<string> strings, int n) 
{
 
    for (int i = 0; i<strings.size(); i++)
     {   
     
		     // 첫 번째 반복문 -> strings의 각 문자열을 순차적으로 선택
        for (int j = i + 1; j<strings.size(); j++)
         {   
         
		        // 두 번째 반복문, 선택된 문자열(strings[i])과 나머지 문자열을 비교
            if (strings[i][n] > strings[j][n]) 
            {
                // strings[i]의 n번째 문자가 strings[j]의 n번째 문자보다 클 경우, 두 문자열을 교환
                string txt = strings[i];  // strings[i] 값을 임시 변수에 저장
                strings[i] = strings[j];  // strings[i] 자리에 strings[j] 값을 넣음
                strings[j] = txt;         // strings[j] 자리에 임시 변수에 저장해 둔 값을 넣음
            }
            
            
            // n번째 문자가 동일할 경우
            else if (strings[i][n] == strings[j][n]) 
            {
                // 두 문자열을 사전순으로 비교하여 정렬
                if (strings[i] > strings[j]) 
                {
                    // 사전순으로 strings[i]가 뒤에 있을 경우, 두 문자열을 교환
                    string txt = strings[i];  // 마찬가지로 임시 변수에 strings[i] 저장
                    strings[i] = strings[j];  // strings[i]에 strings[j] 저장
                    strings[j] = txt;         // strings[j]에 임시 변수 값을 넣음
                }
            }
        }
    }
    return strings;
}
