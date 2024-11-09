#include <string>
#include <vector>

using namespace std;

char push_BackWard(char c, string skip)
{
	// 스킵에 c+1이 있다면 다시 한 번 더 뒤로 밀음
	if (c < 'z' && skip.find(c + 1) != string::npos) return push_BackWard(c + 1, skip);
	else if (c == 'z' && skip.find('a') != string::npos) return push_BackWard('a', skip);
	else return c == 'z'? 'a': c + 1;
}

string solution(string s, string skip, int index) {
	string answer = "";
	int temp;
	char c_temp;
	for (auto c : s)
	{
		c_temp = c;
		for (int i = 1; i <= index; i++)
		{
			c_temp = push_BackWard(c_temp, skip);
		}
		answer += c_temp;
	}
    return answer;
}
