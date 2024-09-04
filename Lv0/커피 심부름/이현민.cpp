#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for(int i = 0; i < order.size(); ++i)
    {
        if(order[i].find("latte") != string::npos) answer += 5000;
        else answer += 4500;
    }
    return answer;
}
