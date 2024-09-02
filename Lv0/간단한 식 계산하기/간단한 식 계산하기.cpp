#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    vector<string> vec;
    string str;
    
    for(auto c: binomial)
    {
        if(c == ' ')
        {  
            vec.push_back(str);
            str = "";
        } 
        else
            str += c;
    }
    if (!str.empty()) {
        vec.push_back(str);
    }
    
    if(vec[1] == "+")
        answer = stoi(vec[0]) + stoi(vec[2]);
    else if(vec[1] == "-")
        answer = stoi(vec[0]) - stoi(vec[2]);
    else if(vec[1] == "*")
        answer = stoi(vec[0]) * stoi(vec[2]);

    return answer;
}