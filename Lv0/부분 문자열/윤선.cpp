#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    if (str2.find(str1) == string::npos)
    {
        return 0;
    }else{
        return 1;
    }
}
