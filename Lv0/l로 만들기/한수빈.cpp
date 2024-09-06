#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    
    for(auto& c: myString)
    {
        if(c < 'l')
            c = 'l';
    }
    
    return myString;
}
