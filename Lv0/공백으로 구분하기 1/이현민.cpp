#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    string s;
    vector<string> answer;
    for(int i = 0; i < my_string.size(); ++i)
    {
        if(my_string[i] != ' ')
        {
            s += my_string[i];
            if(i == my_string.size()-1) answer.push_back(s);
        }
        else if(my_string[i] == ' ')
        {
            answer.push_back(s);
            s = "";
        }
    }
    return answer;
}
