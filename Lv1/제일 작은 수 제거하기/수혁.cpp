#include <vector>
#include <iostream>

using namespace std;


vector<int> solution(vector<int> arr) 
{
    // 배열이 하나의 요소만 가진 경우, -1을 반환
    if (arr.size() == 1) 
    {
        return {-1};
    }

    // 최소값 찾기
    int min = arr[0];  // 첫 번째 요소를 최소값으로 초기화
    
    for (int i = 1; i < arr.size(); i++) 
    {
        if (arr[i] < min) 
        {  
            // 현재 최소값보다 작은 값이 발견되면 최소값 갱신
            min = arr[i];     
        }
    }

    // 최소값 제거
    for (int i = 0; i < arr.size(); i++) 
    {
        if (arr[i] == min) 
        {      
		        // 배열의 요소가 최소값과 같다면 제거
            arr.erase(arr.begin() + i);  
            break;                
        }
    }

    
    return arr;
}
