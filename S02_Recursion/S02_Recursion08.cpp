#include <iostream>

using namespace std;

static void printInBinary(int n)
{
    if(n<2)
    {
        cout << n ;      
    }
    else
    {        
       printInBinary(n/2);
       cout<< (n%2);
    }    
}

int main()
{
    int n = 3;  

    cout << "Printing "<< n << " in Binary..." << endl;
    printInBinary(n);
}
