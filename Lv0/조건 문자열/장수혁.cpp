#include <iostream>
#include <string>


int solution(std::string ineq, std::string eq, int n, int m) {
    
   
    std::string oper = ineq + eq;
    
    // oper 값이 "<="인 경우, n이 m보다 작거나 같으면 1, 그렇지 않으면 0 반환
    if (oper == "<=") 
    {
        return n <= m ? 1 : 0;
    }
    
    // oper 값이 ">="인 경우, n이 m보다 크거나 같으면 1, 그렇지 않으면 0 반환
    else if (oper == ">=") 
    {
        return n >= m ? 1 : 0;
    }
    
    // oper 값이 "<!"인 경우, n이 m보다 작으면 1, 그렇지 않으면 0 반환
    else if (oper == "<!") 
    {
        return n < m ? 1 : 0;
    }
    
    // oper 값이 ">!"인 경우, n이 m보다 크면 1, 그렇지 않으면 0 반환
    else if (oper == ">!") 
    {
        return n > m ? 1 : 0;
    }
    
    // oper 값이 위의 네 가지 경우에 해당하지 않는 경우, 0 반환
    // (이 경우는 문제에서 제공된 조건을 따르면 발생하지 않음)
    else 
    {
        return 0;
    }
}
