#include <iostream>
#include <math.h>
using namespace std;

static int FindMax(int data[], int begin, int end)
{
    //검색할 데이터가 1개라면
    if(begin=end)
    {
        return data[begin];
    }
    else
    {
        int middle = (begin+end)/2;
        int max1 = FindMax(data, begin, middle);
        int max2 = FindMax(data, middle+1, end);        
        return fmax(max1, max2);
    }     
}

int main()
{
    int myData[5] ={1,3,5,7,9};

    cout << "myData is..." << endl;
    for(int i=0; i<5; i++)
    {
        cout << myData[i];
        if(i<4)
        {
            cout << ", ";
        }
        else
        {
            cout << endl;
        }        
    }
    
    cout << "Find max value..." << endl;
    cout << "Max value is " << FindMax(myData,0,4) << endl;
}