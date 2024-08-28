#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(auto q: queries)
    {
        int m = 1000001;
        vector<int> min;
        
        for(int i = q[0]; i <= q[1]; i++){
            if(arr[i] > q[2])
                min.push_back(arr[i]);  
        }
        
        if(min.size() == 0)
            m = -1;
        else{
            for(int i=0; i<min.size(); i++){
                if(min[i] < m)
                    m = min[i];
            }
        }
        answer.push_back(m);
    }
        
    return answer;
}