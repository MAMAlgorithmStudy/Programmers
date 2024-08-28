#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string str2;
    
    for(string str1: intStrs)
    {
        str2 = "";
        for(int i=s ; i < s+l; i++)
        {
            str2[i-s] = str1[i];
        }
        
        if(stoi(str2) > k)
        {
            answer.push_back(stoi(str2));
        }
    }
    
    return answer;
}