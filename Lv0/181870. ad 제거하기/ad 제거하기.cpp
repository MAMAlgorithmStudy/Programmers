#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    // strArr을 for문으로 돌아서 각 문자열 중 ad를 find한 다음, 찾지 못할 경우만 answer에 넣기
    for(string s : strArr)
    {
        if(s.find("ad", 0) == string::npos)
            answer.push_back(s);
    }
    
    return answer;
}