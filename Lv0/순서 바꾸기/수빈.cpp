#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    vector<int> first;
    vector<int> last;
    
    first = vector<int>(num_list.begin()+n, num_list.end());
    last = vector<int>(num_list.begin(), num_list.begin()+n);
    
    for(auto n: first)
    {
        answer.push_back(n);
    }
    for(auto n: last)
    {
        answer.push_back(n);
    }
    
    return answer;
}