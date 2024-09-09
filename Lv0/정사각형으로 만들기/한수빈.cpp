#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    
    if(arr.size() > arr[0].size()) // 행 > 열
    {   
        while(arr.size() != arr[0].size())
        {
            for(auto& c: arr)
                c.push_back(0);
        }
    }
    else if(arr.size() < arr[0].size()) // 행 < 열
    {
        while(arr.size() != arr[0].size())
        {
            arr.push_back(vector<int>(arr[0].size(), 0));
        }
    }
    
    return arr;
}
