#include <string>
#include <vector>
#include <algorithm> // sort 함수를 사용하기 위해 헤더 추가

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    // num_list를 오름차순으로 정렬
    sort(num_list.begin(), num_list.end());
    
    // 가장 작은 5개의 수 선택
    // 첫번째 인자 = 배열의 포인터
    // 두번째 인자 = 배열의 포인터 + 배열의 크기
    vector<int> answer(num_list.begin(), num_list.begin() + 5);
    
    return answer;
}

int main() 
{
    vector<int> test1 = {12, 4, 15, 46, 38, 1, 14};
    vector<int> result1 = solution(test1);
    
    // 결과 출력
    for(int num : result1) 
    {
        printf("%d ", num);
    }
    // 출력: 1 4 12 14 15
    return 0;
}
