#include <string>
#include <vector>
#include <string.h>
using namespace std;

string solution(string s) {
    return (s.length()%2 == 1)?s.substr((s.length()/2),1):s.substr((s.length()/2-1),2);
}
