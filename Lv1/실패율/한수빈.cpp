#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer; 
    vector<pair<int, int>> percent(N); // [통과한 사람 수, 못한 사람 수]
    vector<pair<double, int>> fail(N); // [실패율, 스테이지]
    // 만약 2에 멈춰있는 거면, 1은 통과한 것 
    for(auto s : stages)
    {
        for(int i=1; i<s; i++)
        {
            percent[i-1].first++; // 통과한 사람 수++
        }
        if(s <= N)
            percent[s-1].second++;// s스테이지 통과 못한 사람++ 
    }
    for(int i=0; i<N; i++)
    {
        fail[i].second = i+1; // 스테이지 번호
        int total = percent[i].first+percent[i].second; // 실패/전체
        if(total > 0)
        {
        fail[i].first = (double)percent[i].second / total;
        }else
        {
            fail[i].first = 0.0f;
        } 
    }
    sort(fail.begin(), fail.end(), [](const pair<double, int>& a, const pair<double, int>& b)
    {
        if(a.first == b.first)
            return a.second < b.second; // 실패율이 같다면, 스테이지 번호가 작은 순서대로
        else
            return a.first > b.first; // 다르다면, 실패율 높은 순서대로
    }); 
   
    
    for(int i=0; i<N; i++)
    {
        answer.push_back(fail[i].second); // 스테이지 정보 담음
    }
    return answer;
}
