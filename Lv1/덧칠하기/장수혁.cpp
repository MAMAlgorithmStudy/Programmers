#include <string>
#include <vector>

using namespace std;


int solution(int n, int m, vector<int> section) {
    
    
    int answer = 0;
    

    while(!section.empty())
    {
           
        int idx = 0;


        for(int i = 0; i < section.size(); i++)
        {

            if(section[i] <= section[0] + m - 1)
            {
    
                idx = i;
            }
            

            else
            {
                idx = i - 1;
                break;
            }
        }

        for(int i = 0; i < idx+1; i++)
        {
            section.erase(section.begin());
        }

        
        answer++;
    }

    
    return answer;
}
