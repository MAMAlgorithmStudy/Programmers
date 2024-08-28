#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(auto n: arr)
    {
        if(n >= 50 && n%2 ==0)
            n /= 2;
        else if(n<50 && n%2 ==1)
            n *= 2;
        answer.push_back(n);
    }
    
    return answer;
}