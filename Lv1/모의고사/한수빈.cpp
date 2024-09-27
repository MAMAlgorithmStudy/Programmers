#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    // 1번 수포자 : 1,2,3,4,5 반복
    // 2번 수포자 : 2,1,2,3,2,4,2,5 반복
    // 3번 수포자 : 3,3,1,1,2,2,4,4,5,5 반복
    vector<int> first = {1,2,3,4,5};
    vector<int> second = {2,1,2,3,2,4,2,5};
    vector<int> third = {3,3,1,1,2,2,4,4,5,5};
    int f = 0, s = 0, t = 0; // 받은 점수
    for(int i=0; i<answers.size(); i++) // answer 크기만큼 반복
    {
        // 만약 수포자들 배열의 마지막에 다다르면 배열의 첫번째로 돌아감
        if(answers[i] == first[i%first.size()]) // 배열을 반복하기 위해 나머지값으로 활용
            f++;
        if(answers[i] == second[i%second.size()])
            s++;
        if(answers[i] == third[i%third.size()])
            t++;
    }
    if(max({f,s,t}) == f)
        answer.push_back(1);
    if(max({f,s,t}) == s)
        answer.push_back(2);
    if(max({f,s,t}) == t)
        answer.push_back(3);
    
    return answer;
}
