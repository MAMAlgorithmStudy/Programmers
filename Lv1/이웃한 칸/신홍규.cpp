#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
	int answer = 0;

	vector<int> dh = {0,1,-1,0};
	vector<int> dw = {1,0,0,-1};

	for (int i = 0; i <= 3; i++)
	{
        if(h + dh[i] < 0) continue;
        else if(h + dh[i] >= board.size()) continue;
        
         if(w + dw[i] < 0) continue;
        else if(w + dw[i] >= board[0].size()) continue;
        
        
		if (board[h][w] == board[h + dh[i]][w + dw[i]]) answer++;
	}
    
    return answer;
}
