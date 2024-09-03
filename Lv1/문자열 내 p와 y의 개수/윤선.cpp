#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int Pp = 0;
    int Yy = 0;
    
    for (int i = 0; i < s.size(); i++) { 
       if (s[i] == 'P' || s[i] == 'p'){
         Pp++;
        } else if (s[i] == 'Y' || s[i] == 'y'){
            Yy++;
        }
     }
    if (Pp == Yy){
         return answer;
     } else if (Pp != Yy) {
         answer = false;
            return answer;
    }
}
