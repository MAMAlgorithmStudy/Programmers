#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    for(auto c: order)
    {
        if(c.find("latte") != string::npos)
            answer += 5000;
        else
            answer += 4500;
    }
    
    return answer;
}
