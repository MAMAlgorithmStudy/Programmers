#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
		// 10개 마다 서비스
    int service = n / 10;
    return n* 12000 + (k-service)*2000;
}
