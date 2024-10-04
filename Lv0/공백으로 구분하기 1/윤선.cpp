#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp;
    for (int i = 0; i < my_string.size(); i++)
    {
        //  if문을 통해 my_string에서 공백을 만날때까지 temp라는 문자열 변수에 단어를 저장
        if (my_string[i] != ' ')
        {
            temp += my_string[i];
        }else
        {
            // 공백을 만날경우 else문을 통해 temp에 저장된 단어를 answer에 저장하고, temp는 다시 초기화
            answer.push_back(temp);
            temp = "";
        }
    }
    // for loop가 끝난후 마지막에 저장된 단어를 answer를 저장하고, 단어가 하나일 경우를 대비하여 push_back을 한번 더 수행.
    answer.push_back(temp);
    return answer;
}
