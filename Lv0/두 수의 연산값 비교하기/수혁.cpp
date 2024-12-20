// https://school.programmers.co.kr/learn/courses/30/lessons/181938

#include <string>  
#include <vector>  

using namespace std;  

int solution(int a, int b) 
{
    // 1.  정수 a와  b를 문자열로 변환 -> 연결 후 다시 정수로 변환
    int Q1 = stoi(to_string(a) + to_string(b));

    // 2. 
    int Q2 = 2 * a * b;
    
    // 3. A와 B 중 더 큰 값을 반환
    return Q1 > Q2 ? Q1 : Q2;
}
