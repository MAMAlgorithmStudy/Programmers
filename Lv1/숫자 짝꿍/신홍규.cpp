#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    
    string answer = "";

	vector<int> count_X(10, 0), count_Y(10, 0);

	for (auto c : X)
	{
		count_X[c - '0']++;
	}
	for (auto c : Y)
	{
		count_Y[c - '0']++;
	}
	int minCount;
	for (int i = 9; i >= 0; i--)
	{
		minCount = min(count_X[i], count_Y[i]);
		answer += string(minCount, '0' + i);
	}

	if (answer[0]=='0')
		answer = "0";
    
  if(answer.empty()) return "-1";
    
  return answer;
}
