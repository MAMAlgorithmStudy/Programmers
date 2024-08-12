#include <string>

using namespace std;

int solution(int n, string control) {
    int ans = n;
    
    for (int i = 0; i < control.size(); ++i)
    {
        if (control[i] == 'w') ans += 1;
        else if (control[i] =='s') ans -= 1;
        else if (control[i] =='d') ans += 10;
        else if (control[i] =='a') ans -= 10;
    }
    return ans;
}
