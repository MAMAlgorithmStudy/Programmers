#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int size = num_list.size();
    int last = num_list[size-1];
    int before = num_list[size-2];
    
    if(last > before)
        num_list.push_back(last - before);
    else
        num_list.push_back(last + last);
    
    answer = num_list;
    
    return answer;
}