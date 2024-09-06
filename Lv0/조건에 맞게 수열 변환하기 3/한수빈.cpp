#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    
    if(k & 1) // 홀수라면
    {
        for(int& i : arr)
            i *= k;
    }
    else
    {
        for(int& i : arr)
            i += k;
    }
    
    return arr;
}
