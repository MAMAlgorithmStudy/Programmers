#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int height = 0;
    int width = 0;
    for(int i = 0; i<sizes.size(); i++){
        if(sizes[i][0] > sizes[i][1]){
            height = max(height, sizes[i][1]);
            width = max(width, sizes[i][0]);
        }
        else {
            height = max(height, sizes[i][0]);
            width = max(width, sizes[i][1]);
        }
    }
    
    return height*width;
}
