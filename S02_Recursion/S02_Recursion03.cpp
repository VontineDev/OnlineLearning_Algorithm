#include <iostream>

using namespace std;

//fibonacci(int n)은 피보나치 수열을 계산
static int fibonacci(int n)
{    
    if(n<2)
        {
            return n;
        }
    else
        {
            return fibonacci(n-1) + fibonacci(n-2);
        }    
}

int main()
{
    int n = fibonacci(4);
    cout << n << endl;
    return 0;
}