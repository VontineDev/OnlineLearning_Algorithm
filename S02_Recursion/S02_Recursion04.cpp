#include <iostream>

using namespace std;

//gcd(int n)은 피보나치 수열을 계산
static int gcd(int m, int n)
{    
    if(m<n)
        {
            int tmp=m;
            m=n;
            n=tmp;
            //m<n 인 경우 두 수를 바꿈
        }
    
    if(m%n==0)
        {
            return n;
        }
        else
        {
            return gcd(m, m%n);
        }
}

static int gcd_simple(int p, int q)
{
    if(q==0)
        {
            return p;
        }
    else
        {
            return gcd_simple(q, p%q);
        }
}

int main()
{
    int n = gcd(3,12);
    cout << "gcd " << n << endl;
    int k = gcd_simple(3,12);
    cout << "gcd_simple " << k << endl;
    return 0;
}