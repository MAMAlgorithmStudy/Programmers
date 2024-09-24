#include <string>
#include <vector>
#include <queue>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    queue<string> c1, c2;
    
    for(auto c: cards1)
        c1.push(c);
    for(auto c: cards2)
        c2.push(c);
    
    for(int i=0; i<goal.size(); i++)
    {
        if(goal[i] == c1.front())
            c1.pop(); // 카드 골랐으면 제거
        else if(goal[i] == c2.front())
            c2.pop(); // 카드 골랐으면 제거
        else
            return "No";
    }
    
    return "Yes";
}
