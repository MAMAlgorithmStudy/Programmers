#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vec;
    int m = n;
    
    while(n)
    {
        m = n%3;
        vec.push_back(m);
        n = n/3;
    }
    for(int i=vec.size(); i>0; i--) // 3,2,1,0 // i = 4,3,2,1
    {
        answer += pow(3,vec.size()-i)*(vec[i-1]);
    }
    
    return answer;
}
