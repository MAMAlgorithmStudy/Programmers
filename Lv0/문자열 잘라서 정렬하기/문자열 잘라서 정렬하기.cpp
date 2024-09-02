#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string str;
    for(char c : myString)
    {
        if(c=='x')
        {
            if(!str.empty())
                answer.push_back(str);
            str="";
        }else
            str+=c;
    }
    if(!str.empty())
        answer.push_back(str);
    sort(answer.begin(), answer.end());
    return answer;
}