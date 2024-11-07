#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    //bool answer = true;
    int a = 0;
    int t = x;

    while (t > 0)
    {
        a += t%10;
        t /= 10;
    }
    if (x % a == 0)
    {
        return true;
    }else{
        return false;
    }
}
