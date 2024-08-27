#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    
    for(int i = 0; i < index_list.size(); ++i)
    {
        int s = index_list[i];
        answer.push_back(my_string[s]);
    }
    
    return answer;
}
