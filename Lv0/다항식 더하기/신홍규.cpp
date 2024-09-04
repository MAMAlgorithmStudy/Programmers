#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    int coef_x = 0;
    int const_sum = 0;
    istringstream ss (polynomial);
    string temp;
    vector<string> v;
    
     while(getline(ss,temp,' ')){
        v.push_back(temp);
    }
    for(auto s : v){
        
        if(s.find('x')!=string::npos) {
            if(s.length()==1){
                coef_x += 1;
            }
            else{
                s.erase(s.find('x'));
                coef_x += stoi(s);   
            }
        }
        else if (s != "+"){
            const_sum += stoi(s);
        }
        
    }
    if(coef_x != 0&&coef_x != 1){
        answer = to_string(coef_x)+ "x";   
    }
    else if(coef_x == 1){
        answer = "x"; 
    }
    if(const_sum != 0){
        if(coef_x != 0){
            answer += " + " + to_string(const_sum);   
        }
        else {
            answer += to_string(const_sum);
        }
    }
    return answer;
}
