#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int answer2 = 0;
    for (int i = 0; i < num_list.size(); ++i)
    {
        if (i % 2 == 0)
            answer += num_list[i] ;
        else
            answer2 += num_list[i];
    }
    return answer >= answer2 ? answer : answer2;
}
