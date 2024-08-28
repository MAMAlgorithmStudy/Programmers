#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int i,j = 0;
    int temp=0;
    
    for(int n=0; n<queries.size(); n++){
        i = queries[n][0];
        j = queries[n][1];
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    answer = arr;
    return answer;
}