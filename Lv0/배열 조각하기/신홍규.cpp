#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    for(int i = 0; i < query.size(); i++){
        if(i%2 == 0){
            for(int j = arr.size()-1; j>query[i]; j--){
                arr.pop_back();
            }
        }
        else{
            for(int j = 0; j<query[i]; j++){
                arr.erase(arr.begin());
            }
        }
    }
    return arr;
}
