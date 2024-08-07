#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){	
    if(b==0 ) return a;
	return gcd(b, a %b);
}

int solution(int a, int b) {
    int smaller = a > b ? b : a;
    int bigger =  a <= b ? b : a;
    if(a == b) return 1;
    int n = gcd(smaller,bigger);
    b /= n;
    
    while(1){
        if(b%2 == 0){
            b/=2;
        }
        else if(b%5 == 0){
            b/=5;
        }
        else break;
        
    }
    return b==1 || b == 2 || b == 5? 1 : 2;
}
