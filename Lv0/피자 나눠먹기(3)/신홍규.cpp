#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    return n/slice + (n%slice!=0?1:0);
}
