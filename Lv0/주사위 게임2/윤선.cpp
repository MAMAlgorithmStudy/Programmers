#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    int ans1 = a + b + c;
    int ans2 = ans1*(a*a + b*b + c*c);
    if(a != b && a != c && b != c )
    {
        return ans1;
    }else if( a == b && a != c || a == c && a != b || b == c && a != b)
    {
        return ans2;
    }else if(a == b && b == c)
    {
        return ans2 * (pow(a, 3) + pow(b, 3) + pow(c, 3));
    }
    return answer;
}
