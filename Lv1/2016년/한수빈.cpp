#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> week = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    vector<int> start = {5, 1, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4}; // 매월 일요일
    // a월이 1,3,5,7,8,10,12월이면 31일, 이외는 30일, 2월은 29일
    
    answer = week[(start[a-1]+b-1)%7];
    
    return answer;
}
