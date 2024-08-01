#include <string>
#include <vector>

using namespace std;

bool isAllC(string s) {
    for (auto c : s) {
        if (c != 'C') return false;
    }
    return true;
}

int solution(vector<string> babbling) {
    vector<string> can;
    int answer = 0;

    can.push_back("aya");
    can.push_back("ye");
    can.push_back("woo");
    can.push_back("ma");

    for (auto s : babbling) {
        string replacement = "";
        for (auto c : can) {
            if (s.find(c) != -1) {
                for (int i = 0; i < c.length(); i++) {
                    replacement += 'C';
                }
                s.replace(s.find(c),c.length(), replacement);
            }
            if (isAllC(s)) {
                answer++;
                break;
            }
        }
    }
    return answer;
}
