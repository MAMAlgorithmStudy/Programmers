#include <string>
#include <bitset>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string intToBinary(int p,int n){
    string ret = "";
    while(p > 0){
        ret += to_string(p%2);
        p/=2;
    }
    while(ret.length() != n){
        ret += '0';
    }
    std::reverse(ret.begin(), ret.end());
    return ret;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string b1,b2,result = "";
    vector<bool> binaryCheck(n,false);
    for(int i = 0; i < n;i++){
        b1 = intToBinary(arr1[i],n);
        b2 = intToBinary(arr2[i],n);
        for(int j =0; j<n; j++){
            if(b1[j] == '1' || b2[j] == '1') result+="#";
            else  result += " ";
        }
        answer.push_back(result);
        result = "";
    }
    
    return answer;
}
