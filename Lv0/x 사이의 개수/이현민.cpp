#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    int n = 0;
    vector<int> answer;
    for(int i = 0; i < myString.size(); ++i)
    {
        if(myString[i] == 'x')
        {
            answer.push_back(n);
            n = 0;
        }
        else n++;
        if(i == myString.size()-1) answer.push_back(n);
    }
    return answer;
}
