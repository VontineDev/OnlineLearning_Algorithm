#include <iostream>

using namespace std;
// data[0]에서 data[n-1]까지의 합을 구하여 반환한다
static int sum(int n, int data[])
{
    if(n<=0)
    {
       return 0;  
    }
    else
    {        
      return sum(n-1, data) + data[n-1];
    }    
}

int main()
{
   int n[] = {3,4,5};  

    for(int i =0; i<sizeof(n)/4; i++)
    {
        cout << n[i];
        if(i<(sizeof(n)/4)-1)
        {
            cout << ", ";
        }
        else
        {
            cout << endl;
        }        
    }
    //cout << "size of array is..." << sizeof(n)/4;
    cout << "Sum of array is..." << endl;
    cout << sum(sizeof(n)/4,n) << endl;
}
