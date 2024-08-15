#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(auto s : quiz){
        istringstream ss (s);  
        string temp = "";
        vector<string> v;
        
        while(ss>>temp){
            v.push_back(temp);
        }
        if(v[1]=="+"){
            if(stoi(v[0]) + stoi(v[2]) == stoi(v[4])) answer.push_back("O");
            else answer.push_back("X");
        }
        else {
            if(stoi(v[0]) - stoi(v[2]) == stoi(v[4])) answer.push_back("O");
            else answer.push_back("X");
        }
    }
    return answer;
}
