#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    int i = 0;
    int l = my_string.length();
    
    while(l--)
    {
        answer.push_back(my_string.substr(i));
        i++;
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}