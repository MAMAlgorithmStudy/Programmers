#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
   
    if (n - m >= 0 && ineq == ">"&& eq == "=")
    {
        return 1;
    }else if (n - m <= 0 && ineq == "<" && eq == "=")
    {
        return 1;
    }else if (n - m > 0 && ineq == ">" && eq == "!")
    {
        return 1;
    }else if (n - m < 0 && ineq == "<" && eq == "!"){
        return 1;
    }else{
        return 0;
    }
  
}
