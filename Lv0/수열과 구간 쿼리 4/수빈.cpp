#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    vector<int> q;
    
    // arr[i] + 1씩 더함(queries[i]의 1번 인덱스만큼 i를 돌고 i가 2번 인덱스의 배수일 경우)
    for(int j=0; j<queries.size(); j++){
        q = queries[j];
        for(int i=q[0]; i<=q[1]; i++){
            if(i % q[2] == 0)
                arr[i] += 1;
        }
    }
    answer = arr;
    return answer;
}