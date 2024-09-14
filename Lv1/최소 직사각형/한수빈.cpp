#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w = 0;
    int h = 0;
    
    for(auto& c: sizes)
    {
        if(c[0] < c[1])
            sort(c.begin(),c.end(), greater<>());
        if(c[0] > w)
            w = c[0];
        if(c[1] > h)
            h = c[1];
    }
    
    return w*h;
}
