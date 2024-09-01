#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int hap = 0;
    int gop = 1;
    for(int i = 0; i < num_list.size(); i++)
    {
        hap += num_list[i];
        gop *= num_list[i];
    }
    return gop > hap*hap ? 0 : 1;
}
