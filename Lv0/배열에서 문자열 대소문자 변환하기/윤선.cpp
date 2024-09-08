#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

vector<string> solution(vector<string> strArr) {
   
    for(size_t i = 0; i < strArr.size(); ++i)
    {
        if(i % 2 == 0) // 짝수 인덱스의 문자열을 소문자로 변환
        {
            transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::tolower);
        }
        else // 홀수 인덱스의 문자열을 대문자로 변환
        {
            transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::toupper);
        }
    } 
    return strArr;
}
