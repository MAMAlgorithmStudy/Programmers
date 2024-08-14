#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) 
{
    int answer = n;
    for(int i=0;i<t;i++)
        answer*=2;
    return answer;
}


----------------------------------------


#include <string>
#include <vector>
using namespace std;
int solution(int n, int t) {
    return n << t;
}
