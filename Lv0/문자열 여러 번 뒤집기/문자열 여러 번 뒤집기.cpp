#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    string new_string = my_string; // 새로운 문자열 저장할 곳 생성
    
    for(auto q: queries)
    {//my_string의 q[0]번째부터 q[1]번째까지 반대로
        for(int i=q[0]; i<= q[1]; i++)
        {
            int j = q[1]-i+q[0]; //j번째는 q[1]부터 q[0]까지 거꾸로 (-1)
            new_string[i] = my_string[j];
            
        }
        // 한 번 바꾸고 그 다음 순서엔 새로운 문자열로 기존 문자열 업데이트
        my_string = new_string;
    }
    answer = new_string;
    return answer;
}