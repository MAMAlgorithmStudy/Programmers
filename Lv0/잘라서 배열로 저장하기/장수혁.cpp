#include <string>
#include <vector>

using namespace std;


vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string tempStr; 
  

  
    for(int i = 0; i < my_str.size(); i++) 
    {
        tempStr += my_str[i]; 
      
        if((i + 1) % n == 0) 
        {
            answer.push_back(tempStr);
            tempStr = ""; 
        }
    }
    

    if(tempStr != "")
    {
        answer.push_back(tempStr);
    }
    

    return answer;
}
