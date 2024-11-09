#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int Cal_Score(char score, char bonus,bool omt)
{
    int n_score = score-'0';
    if(omt && score =='1')
    {
        n_score = 10;
    }
    switch(bonus)
    {
        case 'S' : return n_score;
        case 'D' : return n_score*n_score; 
        case 'T' : return n_score*n_score*n_score; 
    } 
}

int solution(string dartResult) {
    int answer = 0;
    string temp="";
    vector<int> Scores(3,0);
    int idx = 0;
    bool oneMeanTen = false;
    for(int i = 0 ; i < dartResult.length(); i++)
    {
        if(dartResult[i-1] == '1' && dartResult[i]== '0')
        {
            oneMeanTen = true;
            continue;
        }
        if(isdigit(dartResult[i]) || i == dartResult.length()-1)
        {
            if(i == dartResult.length()-1)
            {
                temp+= dartResult[i];
            }
            if(temp!="")
            {
                int Score =Cal_Score(temp[0],temp[1],oneMeanTen);
                cout << Score << endl;
                cout << oneMeanTen << endl;
                if(temp.length() == 3)
                {
                    if(temp[2] == '*')
                    {
                        Score*=2;
                        
                        if(idx != 0)
                        {
                            Scores[idx-1] *=2;
                        }
                    }
                    else
                    {
                        Score*=-1;
                    }              
                }
                Scores[idx++] = Score;      
            }
            temp = "";
            oneMeanTen = false;
        }
        temp+= dartResult[i];
    }
    return accumulate(Scores.begin(), Scores.end(), 0);
}
