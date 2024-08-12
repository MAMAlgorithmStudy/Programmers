#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string holsuStr = "";
    string zzaksuStr = "";
    for (int i = 0; i < num_list.size(); i++)
    {
        if ( 0 != num_list[i] % 2)
        {
            holsuStr += to_string(num_list[i]);
        }else{
            zzaksuStr += to_string(num_list[i]);
        }
    }
    return stoi(holsuStr) + stoi(zzaksuStr);
}
