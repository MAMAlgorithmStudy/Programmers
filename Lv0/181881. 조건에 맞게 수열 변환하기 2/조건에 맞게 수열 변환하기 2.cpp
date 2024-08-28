#include <string>
#include <vector>

using namespace std;
// 50보다 크거나 같은 짝수가 없고, 50보다 작은 홀수가 없으면 되지 않나?
int solution(vector<int> arr) {
    int answer = 0;
    bool Change = false; // arr이 변하면 true

    while(true) //무한루프
    {
        Change = false; // 만약 아래 조건들이 수행되지 않으면 그대로 false
        // 변환 가능일 때, 변환하는 코드
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]>=50 && !(arr[i]&1))
            {
                arr[i] /= 2;
                Change = true;
            }
            else if(arr[i]<50 && (arr[i]&1))
            {
                arr[i] = arr[i]*2+1;
                Change = true;
            }
        }
        answer++; // 변환 횟수
        if(Change == false) // arr이 변하지 않는 조건이라면
        {
            return answer-1; // 반복 횟수 반환
        }
    }
}