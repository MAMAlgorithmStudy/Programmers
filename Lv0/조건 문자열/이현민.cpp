#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if(ineq == ">" && eq == "=")
    {
        if(n >= m) return 1;
        else return 0;
    }
    if(ineq == "<" && eq == "=")
    {
        if(n <= m) return 1;
        else return 0;
    }
    if(ineq == ">" && eq == "!")
    {
        if(n > m) return 1;
        else return 0;
    }
    if(ineq == "<" && eq == "!")
    {
        if(n < m) return 1;
        else return 0;
    }
}
