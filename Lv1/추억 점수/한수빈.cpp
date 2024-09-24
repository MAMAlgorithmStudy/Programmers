#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(auto c: photo)
    {
        int sum = 0;
        for(int i=0; i<c.size(); i++)
        {
            auto y = find(name.begin(), name.end(), c[i]);
            
            if(y != name.end())
            {
                int index = distance(name.begin(), y);
                sum += yearning[index];
            }
        }
        answer.push_back(sum);
    }
    
    return answer;
}
