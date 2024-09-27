#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer,supo1 = {1, 2, 3, 4, 5},supo2 = {2, 1, 2, 3, 2, 4, 2, 5},supo3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
     
    pair<int,int> correct1(1,0),correct2(2,0),correct3(3,0);
    
    // 채점
    for(int i = 0 ; i < answers.size();i++){
        if(supo1[i%5] == answers[i]) correct1.second++;
        if(supo2[i%8] == answers[i]) correct2.second++;
        if(supo3[i%10] == answers[i]) correct3.second++;
    }
    
    // pair들 간의 점수 비교를 통한 정렬을 위한 배열
    vector<pair<int,int>> forSort = {correct1,correct2,correct3};
    
    // 각 pair의 second들로 비교해서 정렬
    sort(forSort.begin(),forSort.end(),[](pair<int,int> a, pair<int,int> b){
				return a.second > b.second;
    });
    
    // forSort를 순회하면서 제일 첫 번째의 pair의 second와 같은 값이 있다면 answer.push_back
    for(auto p : forSort){
        if(forSort[0].second == p.second){
            answer.push_back(p.first);
        }
    }
    
    // answer를 정렬
    sort(answer.begin(),answer.end());
    return answer;
}
