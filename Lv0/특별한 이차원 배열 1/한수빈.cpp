#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n,0));
    //내부 배열의 길이는 n
    //(0,0), (1,1), (2,2), ..., (n-1, n-1)
    int i = 0;
    for(auto& c: answer)
    {
        c[i] = 1;
        i++;
    }
    
    return answer;
}
