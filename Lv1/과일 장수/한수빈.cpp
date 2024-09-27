#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int sum = 0;
    // 1점 ~ k점
    // (가장 낮은 점수) p * (사과 개수) m
    // sort한 다음 m개씩 자르면 될 듯 , p*m 계산
    sort(score.begin(), score.end(), greater<>());
    
    for(int i=0; i + m <= score.size(); i+=m) 
    {
        sum = score[i+m-1] * m;
        answer += sum;
    }
    
    return answer;
}
