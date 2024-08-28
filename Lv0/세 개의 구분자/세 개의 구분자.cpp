#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    
    for(char& c: myStr)
    {   
        if(c == 'a' || c == 'b' || c == 'c')
            c = ' ';
    }
    string str;
    stringstream ss;
    ss.str(myStr);
    while(ss >> str)
    {
        answer.push_back(str);
    }
    
    if(answer.empty())
        answer.push_back("EMPTY");
    
    return answer;
}