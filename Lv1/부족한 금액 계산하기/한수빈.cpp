using namespace std;

long long solution(int price, int money, int count)
{
    long long total = 0;
    
    for(int i=1; i<= count; i++)
    {
        total += price*i;   
    }
    if(total > money)
        return  total - money;
    else
        return 0;
}
