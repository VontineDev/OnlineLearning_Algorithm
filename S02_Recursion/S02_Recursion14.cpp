#include <iostream>
#include <math.h>
using namespace std;

static int FindMax(int data[], int begin, int end)
{
    //검색할 데이터가 없다면
    if(begin>end)
    {
        return data[begin];
    }
    else
    {
        return fmax(data[begin], FindMax(data, begin+1, end));
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