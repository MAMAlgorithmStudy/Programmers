#include <string>      /
#include <vector>     
#include <algorithm>   
using namespace std;   


vector<int> solution(vector<int> numbers)
{
    vector<int> answer; 


    for (int i = 0; i < numbers.size() - 1; i++) // 첫 번째 숫자를 선택
    {
        for (int j = i + 1; j < numbers.size(); j++) // 두 번째 숫자를 선택
        {
            int sum = numbers[i] + numbers[j]; // 두 숫자의 합을 계산

            // 이미 answer 벡터에 같은 합이 있는지 확인
            // find 함수는 answer 벡터에서 sum을 찾고, 못 찾으면 answer.end()를 반환
            if (find(answer.begin(), answer.end(), sum) == answer.end())
            {
                answer.push_back(sum); // 중복되지 않으면 answer 벡터에 추가
            }
        }
    }


    sort(answer.begin(), answer.end());

    return answer;
}

    sort(answer.begin(), answer.end());

    return answer; // 정렬된 결과를 반환
}
