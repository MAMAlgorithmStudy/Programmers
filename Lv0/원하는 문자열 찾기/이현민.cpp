#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) 
{
    // myString과 pat을 모두 소문자로 변환
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    transform(pat.begin(), pat.end(), pat.begin(), ::tolower);
    
    // myString에서 pat이 존재하는지 확인
    return myString.find(pat) != string::npos ? 1 : 0;
}
