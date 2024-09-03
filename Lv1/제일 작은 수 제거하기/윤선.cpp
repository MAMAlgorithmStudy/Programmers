#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];
    for (int i = 0; i < arr.size(); i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    for (int i = 0; i < arr.size(); i++){
        if (min == arr[i]){
            arr.erase(arr.begin()+i);
        }
    }
    if (arr.empty()){
        arr.push_back(-1);
    }
    return arr;
}
