#include <iostream>

using namespace std;

static int ReverseSearch(int data[], int begin, int end, int target)
{
    //검색할 데이터가 없다면
    if(begin>end)
    {
        return -1;
    }
    //target을 찾았다면 해당 index를 반환
    else if(target==data[end])
    {
        return end;
    }
    //아직 못찾았다면 begin+1 에서 end까지의 위치에서 target을 찾는다.
    else
    {
        return ReverseSearch(data, begin, end-1, target);
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
    
    cout << "Searching(5)..." << endl;
    cout << "Position of (5) is " << ReverseSearch(myData,0,4,5) << endl;
}