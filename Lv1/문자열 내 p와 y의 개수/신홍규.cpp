#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int y_count = 0;
	int p_count = 0;

	for (auto c : s) {
		if(c == 'p' || c == 'P') p_count++;
		else if(c == 'y' || c == 'Y') y_count++;
	}
	return p_count == y_count;
}
