#include <string>
#include <vector>
#include <numeric> // accumulate
#include <functional> // multiplies

using namespace std;

int solution(vector<int> num_list) {
    if (num_list.size() > 10)
    {
        int sum1 = accumulate(num_list.begin(),num_list.end(),0);
        return sum1;
    }
    else
    {
        int sum2 = accumulate(num_list.begin(),num_list.end(),1,multiplies<int>());
        return sum2;
    }
}
