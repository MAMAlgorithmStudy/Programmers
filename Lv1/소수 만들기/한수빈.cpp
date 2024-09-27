#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    
    // 소수 = 자신과 1만 약수인 수
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            for(int k=j+1; k<nums.size(); k++)
            {
                int sum = nums[i]+nums[j]+nums[k];
                bool sosu = true;
                for(int m=2; m< sum; m++)
                {
                    if(sum % m == 0) // 만약 약수가 존재한다면
                    {    
                        sosu = false;
                        break;
                    }
                }
                if(sosu == true) answer++;
            }
        }
    }

    return answer;
}
