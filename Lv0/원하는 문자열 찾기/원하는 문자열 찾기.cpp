#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {

    for (int i=0; i<myString.size(); i++)
    {
        myString[i] = tolower(myString[i]);
    }
    for (int i=0; i<pat.size(); i++)
    {
        pat[i] = tolower(pat[i]);
    }
    
    if(myString.length() < pat.length())
        return 0;
    else
    {
        for(int i=0; i<myString.length()-pat.length()+1; i++)
        {
            if(pat == myString.substr(i, pat.length()))
                return 1;
        }
    }
    
    return 0;
}