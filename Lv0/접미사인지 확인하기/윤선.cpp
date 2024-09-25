#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    string a = "";
    
    for(int i = 0; i < my_string.size(); i++)
    {
        a = my_string.substr(i);
        if(a == is_suffix) return 1;
    }
    return 0;
    
}
