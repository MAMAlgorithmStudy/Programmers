#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    int cur = -1;
    for(int i = 0 ; i < arr.size(); i++){
        if(cur==arr[i]) {
            arr.erase(arr.begin()+i);
            i--;
        }
        else {
            cur = arr[i];
        }
    }
    return arr;
}
