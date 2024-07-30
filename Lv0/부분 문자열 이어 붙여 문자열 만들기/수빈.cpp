#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    int i = 0; 

    for(string str: my_strings) //"progressive", "hamburger", ...
    {
        answer += str.substr(parts[i][0],parts[i][1]-parts[i][0]+1);
        i++; 
    }
    return answer;
}
