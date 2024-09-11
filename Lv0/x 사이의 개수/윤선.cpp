#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int str = 0;
    for (int i = 0; i < myString.size(); i++)
    {
        if(myString[i] == 'x') 
        {
            answer.push_back(str);
            str = 0;
        }
        else
        str++;
    }
    answer.push_back(str);
    return answer;
}
