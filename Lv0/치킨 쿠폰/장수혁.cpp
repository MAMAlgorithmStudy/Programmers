#include <string>
#include <vector>

using namespace std;

int solution(int Chicken) {
    int Answer = 0;  

    while (Chicken >= 10)  
    {
        Answer += Chicken / 10; 
        Chicken = Chicken / 10 + Chicken % 10;  
    }

    return Answer;  
}
