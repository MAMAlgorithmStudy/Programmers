#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
   // 각 자판당 1개의 문자를 입력하려면 필요한 횟수
vector<int> inputTimes;

vector<int> answer;

int sum = 0;
int min = 0;
int check = 0;
int t_length;
// targets의 한 문자열의 문자를 하나씩 검사
for (auto target : targets)
{
    t_length = target.length();
	for (auto c : target)
	{
		for (auto key : keymap)
		{
			if (key.find(c) != string::npos)
			{
				inputTimes.push_back(key.find(c)+1);
			}
		}
		if(inputTimes.size()!=0)
		{
            check++;
		    min = *min_element(inputTimes.begin(),inputTimes.end());
		    sum += min;
		    inputTimes = vector<int>();
        }
	}
    sum = t_length != check? -1 : sum;
	answer.push_back(sum);
	sum = 0;
    check = 0;
}
    return answer;
}
