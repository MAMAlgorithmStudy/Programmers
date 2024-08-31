#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string s1;
    string s2;
    for(int i = 0; i < num_list.size(); ++i)
    {
        if(num_list[i] % 2 == 1)
        {
            s1 += to_string(num_list[i]);
        }
        else if(num_list[i] % 2 == 0)
        {
            s2 += to_string(num_list[i]);
        }
    }
    return stoi(s1) + stoi(s2);
}
