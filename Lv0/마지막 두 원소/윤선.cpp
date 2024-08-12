#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int last = num_list[num_list.size()-1];
    int last1 = num_list[num_list.size()-2];
    if (last > last1)
    {
        num_list.push_back(last - last1);
        return num_list;
    }
    else
    {
        num_list.push_back(last * 2);
        return num_list;
    }
}
