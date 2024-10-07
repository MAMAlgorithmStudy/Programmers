#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {

    for (int i = 0; i < num_list.size(); i++)
    {
        if (n == num_list[i])
        {
            return 1;
        }
    }
    return 0;
}
