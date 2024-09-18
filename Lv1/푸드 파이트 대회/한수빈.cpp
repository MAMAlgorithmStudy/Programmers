#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    // 0을 기준으로 왼쪽과 오른쪽 같으므로, 왼쪽만 우선 따짐
    string left = "";
    // food[1]부터 끝까지 돌면서, food[i]/2 가 숫자 i의 개수, 끝까지 가고 나면 끝에 0 넣기
    for(int i=1; i<food.size(); i++)
    {
        int num = food[i]/2;
        while(num--)
        {
            left += to_string(i);
        }
    }
    answer = left + '0';
    // 이후 거꾸로 순회하며 더하기
    for(int j=left.length()-1; j>=0; j--)
        answer += left[j];
    
    return answer;
}
