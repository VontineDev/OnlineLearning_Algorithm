#include <iostream>

using namespace std;

//factorial(int n)은 Factorial을 계산
static int factorial(int n)
{    
    if(n==0)
        {
            return 1;
        }
    else
        {
            return n * factorial(n-1);
        }    
}

int main()
{
    int n = factorial(4);
    cout << n << endl;
    return 0;
}