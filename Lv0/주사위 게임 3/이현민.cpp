#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> arr = { a, b, c, d };
    
    if(a == b && b == c && c == d) return 1111*a;
    
    else if(a == b && b == c) return pow(10*a+d,2);
    else if(a == b && b == d) return pow(10*a+c,2);
    else if(a == c && c == d) return pow(10*a+b,2);
    else if(b == c && c == d) return pow(10*b+a,2);
    
    else if(a == b && c == d) return (a+c)*abs(a-c);
    else if(b == c && a == d) return (b+a)*abs(b-a);
    else if(a == c && b == d) return (a+b)*abs(a-b);
    
    else if(a == b) return c * d;
    else if(a == c) return b * d;
    else if(a == d) return b * c;
    else if(b == c) return a * d;
    else if(b == d) return a * c;
    else if(c == d) return a * b;
    
    else sort(arr.begin(), arr.end()); return arr[0];
}
