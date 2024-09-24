#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; ++i)
    {
        int count = 1;
        for (int j = 2; j <= i; ++j)
        {
            if (i % j ==0) count++;

        }
        if(count % 2 == 0) answer += i;
        else answer -= i;
    }
    
    return answer;
}
