#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int i = num_list.size();
    if(num_list[i-1] > num_list[i-2])
    {
        num_list.push_back(num_list[i-1] - num_list[i-2]);
    }
    else if(num_list[i-1] <= num_list[i-2])
    {
        num_list.push_back(num_list[i-1] * 2);
    }
    return num_list;
}
