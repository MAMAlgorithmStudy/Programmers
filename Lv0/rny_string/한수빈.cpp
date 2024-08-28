#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    
    for(int i=0; i<rny_string.length(); i++)
    {
        if(rny_string.find('m', i)==i)
        {
            answer += 'r';
            answer += 'n';
        }
        else
            answer += rny_string[i];
            
    }
    return answer;
}