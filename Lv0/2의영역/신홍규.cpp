#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int first2 = -1;
    int last2 = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 2){
            first2 = i;
            break;
        }
    }
    for(int i = arr.size()-1; i>0; i--){
        if(arr[i] == 2){
            last2 = i;
            break;
        }
    }
    if(first2 == -1 || last2 == -1){
        answer.push_back(-1);
        return answer;
    }
    for(int i = first2; i <= last2; i++){
        answer.push_back(arr[i]);
    }
    
    return answer;
}
