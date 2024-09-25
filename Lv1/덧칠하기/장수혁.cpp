#include <string>
#include <vector>

using namespace std;


int solution(int n, int m, vector<int> section) {
    
    
    int answer = 0;
    
    
    // 칠해야 할 구역이 남아있을 때까지 while 반복
    while(!section.empty())
    {
        
        
        // 한 번의 롤러로 페인트 칠할 수 있는 마지막 구역의 인덱스를 저장
        // ( 가장 첫번째로 칠하게될 인덱스 ?)    
        int idx = 0;


        // section 배열에서 페인트칠을 할 구역을 탐색
        for(int i = 0; i < section.size(); i++)
        {
            // section[0] 구역부터 시작해서 m(롤러) 길이 만큼 칠할 수 있는 구역을 찾
            // ex) section[0]이 2번 구역이고 m이 4일 경우, |2|3|4|5| 번 구역까지 칠
            if(section[i] <= section[0] + m - 1)
            {
                // 칠할 수 있는 마지막 구역을 idx에 저장합니다.
                idx = i;
            }
            
            // 더 이상 롤러가 커버할 수 없는 구역이 나오면
            else
            {
                // 그 직전까지 구역을 칠하게
                idx = i - 1;
                break;
            }
        }


        // idx번째까지 구역을 칠했으니, 칠한 구역들은 section 배열에서 제거
        for(int i = 0; i < idx+1; i++)
        {
            // section 배열에서 맨 앞 구역을 반복해서 지웁니다.
            section.erase(section.begin() + 0);
        }


        
        answer++;
    }

    
    return answer;
}
