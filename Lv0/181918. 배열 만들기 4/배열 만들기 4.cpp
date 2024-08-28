#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;
    while(i < arr.size())
    // stk가 빈 배열 -> stk.push_back(arr[i]), i++
    {
        if(stk.empty()){
            stk.push_back(arr[i]);
            i++;
        }
    // stk 빈 배열 x , stk.back() < arr[i] -> stk.push_back(arr[i]), i++
        else if(!stk.empty() && stk.back() < arr[i]){
            stk.push_back(arr[i]);
            i++;
        }
    // stk 빈 배열 x , stk.back() >= arr[i] -> stk.pop()
        else if(!stk.empty() && stk.back() >= arr[i]){
            stk.pop_back();
        }
    }
    return stk;
}