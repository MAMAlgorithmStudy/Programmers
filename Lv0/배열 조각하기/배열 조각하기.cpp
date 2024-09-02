#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    
    for(int i=0; i<query.size(); i++)
    {
        if(i % 2 == 0) // 짝수일 경우
        {
            // 뒷 부분 자름 -> 앞 부분만 넣으면 됨
            arr = vector<int>(arr.begin(), arr.begin()+query[i]+1);
        }
        else if(i % 2 == 1) // 홀수일 경우
        {
            // 앞 부분 자름 -> 뒷 부분을 넣으면 됨
            arr = vector<int>(arr.begin()+query[i], arr.end());
        }
    }
    answer = arr;
    return answer;
}