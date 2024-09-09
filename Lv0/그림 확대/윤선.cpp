#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for (int i = 0; i < picture.size(); ++i)
    {
        string str = "";
        for (int j = 0; j < picture[i].size(); ++j)
        {
            str += string(k, picture[i][j]);
        }
        answer.insert(answer.end(), k, str);
    }

    return answer;
}
