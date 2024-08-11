#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) {
		// 두 문자열의 길이가 같지 않다면 0을 리턴
    if(before.length() != after.length()) return 0;
    
    // 문자열 두개를 모두 정렬
    sort(before.begin(),before.end());
    sort(after.begin(),after.end());
    
    // 두 문자열을 정렬했을 때 같은 인덱스의 문자가 같지 않다면 0을 리턴
    for(int i = 0; i< before.length(); i++){
        if(before[i]!= after[i]){
            return 0;
        }
    }
    // 그렇지 않고 반복문을 빠져나왔다면 1을 리턴
    return 1;
}
