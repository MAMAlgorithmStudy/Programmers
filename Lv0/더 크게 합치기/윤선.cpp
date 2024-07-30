#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string str1 = to_string(a);
    string str2 = to_string(b);
    int num1 = stoi(str1 + str2);
    int num2 = stoi(str2 + str1);
    if (num1 > num2)
    {
        return num1;
    }else {
        return num2;
    }
    return answer;
}
