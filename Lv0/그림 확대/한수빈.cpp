#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    for(string p: picture) // p -> .xx...xx.
    {
        string a ="";
        for(int i=0; i<p.length(); i++)
        {
            for(int j=0; j<k; j++)
                a += p[i]; // a -> .을 2개, x를 2개, ...
        }
        for(int j=0; j<k; j++)
            answer.push_back(a);
    }
    
    return answer;
}
