#include <stdio.h>

int n = 10;
int solution(int n) 
{    
	if (n & 1) 
	{ 
	// n이 홀수인 경우        
		int sum = 0;        
		for (int i = 1; i <= n; i += 2) 
		{            
			sum += i; // 홀수인 모든 정수 합산        
		}        
		return sum;    
	} 
	else 
	{ 
		// n이 짝수인 경우        
		int sum = 0;        
		for (int i = 2; i <= n; i += 2) 
		{            
			sum += i * i; // 짝수인 모든 정수의 제곱 합산        
		}        
	return sum;    
	}
}


int main() 
{    
 int result = solution(n);    
 printf("%d -> %d\n", n, result);    
 return 0;
}

// 출력
// The result for n = 10 is 220
