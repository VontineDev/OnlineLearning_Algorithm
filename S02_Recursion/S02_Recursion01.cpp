#include <iostream>

using namespace std;
//func(int n)은 음이 아닌 정수  n에 대해서 0에서 n까지의 합을 계산
static int func(int n)
{    
    if(n==0)
        {
            return 0;
        }
    else
        {
            return n + func(n-1);
        }    
}

int main()
{
    int n = func(10); 
    cout << n << endl;
    return 0;
}