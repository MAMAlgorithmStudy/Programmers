#include <string>
#include <vector>

using namespace std;
// substr(시작 인덱스, 길이) 활용?
string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    int i = 0; //parts[i] // [0,4], [1,2], ...
    // my_strings에서 [s,e] 인덱스만큼만 떼기
    
    // my_string 반복으로 돌아서
    for(string str: my_strings) //"progressive", "hamburger", ...
    {
        // parts내 각 원소에서, 0번째 1번째 인덱스에 해당하는 수를 my_string의 인덱스로 생각해서 
        // 그 사이 문자열 반환
        // result에 이어붙이기 (my_strings와 parts의 인덱스가 동일할 때만)
        answer += str.substr(parts[i][0],parts[i][1]-parts[i][0]+1);
        i++; // 어차피 parts는 my_strings 길이랑 같으니까
    }

    return answer;
}