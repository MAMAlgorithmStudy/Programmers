#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    
    if (my_string.find(target) == string::npos)
    {
        return 0;
    }else return 1;
}
