#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(string s) {
    int answer = 0;
    string str;
    string ans;
    // 하나씩 검사하면서 숫자가 나올 때까지 
    // 그 전까지는 string에 저장해두고 이를 영단어와 비교하여 숫자로 변환
    // 이후 답 string에 저장 후, int로 변경
    unordered_map<string, char> WordToDigit = {
        {"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'}, {"four", '4'}, 
        {"five", '5'}, {"six", '6'}, {"seven", '7'}, {"eight", '8'}, {"nine", '9'}    
    };
    
    for(char c: s)
    {
        if(isdigit(c)) // 숫자라면
            ans += c;
        else // 문자라면
        {
            str += c;
            if(WordToDigit.find(str) != WordToDigit.end()) // 문자가 완성될 때까지 str에 저장
            {
                ans += WordToDigit[str]; // 문자에 해당하는 숫자 저장
                str = ""; // 초기화
            }   
        }
    }
    answer = stoi(ans);
    return answer;
}
