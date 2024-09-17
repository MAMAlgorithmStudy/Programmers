#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i=0; i<numbers.size()-1; i++)
    {
        for(int j=i+1; j<numbers.size(); j++)
        {
            // answer에 없는 수이면 넣기
            int sum = numbers[i] + numbers[j];
            if(find(answer.begin(), answer.end(),sum) == answer.end())
                answer.push_back(sum);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
