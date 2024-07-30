#include <string>
#include <vector>
#include <numeric> // accumulate 함수 사용하기 위해 헤더 추가

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    
    // 배열의 길이 비교하기
    if(arr1.size() > arr2.size())
    {
        return 1;
    }
    else if (arr1.size() < arr2.size())
    {
        return -1;
    }
    else // 배열의 길이가 같다면 원소의 합을 계산하여서 비교하기
    {
        // accumulate([배열 시작 주소], [배열 끝 주소], [초기값])
        int sum1 = accumulate(arr1.begin(), arr1.end(), 0);
        int sum2 = accumulate(arr2.begin(), arr2.end(), 0);
            
        if(sum1 > sum2) 
        {
            return 1;
        } 
        else if(sum1 < sum2) 
        {
            return -1;
        } 
        else 
        {
            return 0;
        }
    }
}

int main() 
{
    vector<int> arr1_1 = {1, 2};
    vector<int> arr2_1 = {1, 2, 3};
    printf("%d\n", solution(arr1_1, arr2_1));  // 출력: -1

    vector<int> arr1_2 = {10, 20, 30, 40};
    vector<int> arr2_2 = {5, 15, 25, 35};
    printf("%d\n", solution(arr1_2, arr2_2));  // 출력: 1
    
    return 0;
}
