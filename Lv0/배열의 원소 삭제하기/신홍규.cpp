#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for(auto d : delete_list){
        if(find(arr.begin(),arr.end(),d)!=arr.end())
            arr.erase(find(arr.begin(),arr.end(),d));
    }
    return arr;
}
