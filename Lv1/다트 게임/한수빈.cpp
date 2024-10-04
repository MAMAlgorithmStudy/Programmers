#include <string>
#include <vector>

using namespace std;

int solution(string dartResult) { // 점수, 보너스, 옵션 순서
    int answer = 0;
    vector<int> dart; // [첫 번째 점수, 두 번째 점수, 세 번째 점수]
    string score;
    
    for(char d: dartResult)
    {
        if(d >= '0' && d<= '9')
              score += d; 
        else if(d >= 'A' && d<= 'Z')
        {
            int s = stoi(score);
            if(d=='S')  
                dart.push_back(s);
            else if(d=='D')
                dart.push_back(s*s);     
            else if(d=='T')
                dart.push_back(s*s*s);     
            score = "";
        }
        else
        {
            int i = dart.size();
            if(d=='*')
            {    
                dart[i-1] *= 2;
                if(i>1)
                    dart[i-2] *= 2;
            }
            else if(d=='#')
            {
                dart[i-1] *= (-1);
            }
        }
    }
    for(int i=0; i<dart.size(); i++)
        answer += dart[i];
    return answer;
}
