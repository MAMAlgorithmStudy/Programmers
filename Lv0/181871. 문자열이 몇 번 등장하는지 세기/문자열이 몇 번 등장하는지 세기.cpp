#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    // myString의 부분문자열과 pat 비교, 길이는 pat길이만큼
    for(int i=0; i<myString.size(); i++)
    {
        if(myString.substr(i, pat.size()) == pat)
            answer++;
    }
    
    return answer;
}