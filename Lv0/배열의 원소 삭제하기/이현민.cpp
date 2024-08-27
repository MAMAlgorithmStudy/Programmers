#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); ++i)
    {
        // 찾는 원소가 없을 경우 delete_list.end()를 반환해줌
        // arr[i]가 delete_list에 없다면 answer에 추가
        if(find(delete_list.begin(), delete_list.end(), arr[i]) == delete_list.end())
        {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}
