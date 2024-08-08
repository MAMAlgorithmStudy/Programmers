#include <string>
#include <vector>

using namespace std;


vector<string> NumList = {"zero","one","two","three","four","five","six","seven","eight","nine"};

long long solution(string numbers) {
    string answer;
    string temp;
    for(auto c : numbers){
        temp += c;
        for(int i = 0 ; i<NumList.size(); i++){
            if(NumList[i].compare(temp) == 0){
                answer += to_string(i);
                temp = "";
            }
        }
    }
    return stoll(answer);
}
