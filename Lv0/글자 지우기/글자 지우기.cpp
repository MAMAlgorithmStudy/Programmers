#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    
    for(int i : indices)
    {
        my_string[i] = 0;
    }
    
    for(auto c: my_string)
    {
        if(c != 0)
        {
            answer += c;
        }
    }
    
    return answer;
}