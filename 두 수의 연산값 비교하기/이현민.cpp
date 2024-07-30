#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    // to_string 함수로 정수를 문자열로 변환
    // stoi 함수로 문자열을 정수로 변환
    int ab_str = stoi(to_string(a) + to_string(b));
    
    int product = 2 * a * b;
    
    // 비교 후 반환
    if (ab_str>= product) {
        return ab_str;
    } else {
        return product;
    }
    
}

int main() 
{
    printf("%d\n", solution(29, 1));  // 출력: 364
    printf("%d\n", solution(9, 12));  // 출력: 912
    return 0;
}
