#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for(int i=0; i<num_list.size(); i++)
    {
        if(!(num_list[i]&1)) //짝수
        {    
            while(num_list[i] != 1)
            {
                num_list[i] /= 2;
                answer++;
            }
        }
        else if((num_list[i]&1) && num_list[i]!=1) //홀수
        {
            num_list[i] = (num_list[i]-1)/2;
            answer++;
            // 이후는 짝수이므로
            while(num_list[i] != 1)
            {    
                num_list[i] /= 2;
                answer++;
            }
        }
    }
    
    return answer;
}