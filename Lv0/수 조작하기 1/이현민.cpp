#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for(int i = 0; i < control.size(); ++i)
    {
        if(control[i] == 'w') n += 1;
        else if(control[i] == 's') n -= 1;
        else if(control[i] == 'd') n += 10;
        else if(control[i] == 'a') n -= 10;
    }
    return n;
}
