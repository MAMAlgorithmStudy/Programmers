#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string s) {
    vector<string> arr = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string temp;
    string result;
    for(auto c: s){
        if(c >= '0' && c <= '9'){
            result += c;
            continue;
        }
        temp += c;
        if(s.find(temp) != string::npos&& 1<=std::count(arr.begin(),arr.end(), temp)){
            for(int i = 0 ; i < arr.size(); i++){
                if(arr[i] == temp) {
                    result += to_string(i);
                    continue;
                }
            }
            temp = "";
        }
    }
    int answer = stoi(result);
    return answer;
}
