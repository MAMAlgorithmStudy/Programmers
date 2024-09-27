#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string order = ""; 
    string temp;
    int kcal = 1;
    for(int i = 1; i < food.size(); i++){
        for(int j = food[i]/2; j > 0; j--){
            order+=to_string(kcal);
        }
        kcal++;
    }
    temp = order;
    order += to_string(0);
    std::reverse(temp.begin(), temp.end());
    order+= temp;
    
    return order;
}
