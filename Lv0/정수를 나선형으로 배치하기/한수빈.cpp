#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0)); // 모두 0으로 초기화
    // 행 열은 0~n-1까지 총 n*n 배열
    // 왼>오 / 위>아래 / 오>왼 / 아래>위
    // n > n-1 > n-1 > n-2 > n-2 > ... > 1 > 1
    int c = 1;
    int j = 0;
    string dir = "Top";
    while(c <= n*n)
    {
        //위
        if(dir == "Top")
        {
            for(int i=j; i<n-j; i++)
            {
                answer[j][i] = c;
                c++;
            }
            dir = "Right";
        }
        //오
        else if(dir == "Right")
        {
            for(int i=1+j; i<n-j; i++)
            {
                answer[i][n-j-1] = c;
                c++;
            }
            dir = "Bottom";
        }
        //아래
        else if(dir == "Bottom")
        {
            for(int i = n-2-j; i>=0+j; i--)
            {
                answer[n-j-1][i] = c;
                c++;
            }
            dir = "Left";
        }
        //왼
        else if(dir == "Left")
        {
            for(int i = n-2-j; i>0+j; i--)
            {
                answer[i][j] = c;
                c++;
            }
            dir = "Top";
            j++;
        }
    }
    return answer;
}
