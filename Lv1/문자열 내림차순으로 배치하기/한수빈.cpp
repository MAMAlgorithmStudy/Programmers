#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> v;
    
    for(auto c: s) // string을 vector로 변환
        v.push_back(c);
    sort(v.begin(), v.end(), greater<>()); //vector를 오름차순 sort
    for(auto c: v)// vector를 string으로 변환
        answer += c;
    
    return answer;
}
