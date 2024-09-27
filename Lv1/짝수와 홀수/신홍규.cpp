#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    return num%2 == 1? "Odd" : (num%2 == -1 ? "Odd": "Even");
}
