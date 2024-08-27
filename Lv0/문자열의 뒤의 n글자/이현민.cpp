#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for(int i = my_string.size() - n; i < my_string.size(); ++i)
    {
        answer.push_back(my_string[i]);
    }
    return answer;
}
