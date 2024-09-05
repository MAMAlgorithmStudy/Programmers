#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    int x = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
   
    answer = "김서방은 " + to_string(x)  + "에 있다";
    
    return answer;
}
