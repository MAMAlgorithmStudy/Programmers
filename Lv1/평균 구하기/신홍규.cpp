#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0;
    for(auto n : arr){
        sum += n;
    }
    return sum/arr.size();
}
