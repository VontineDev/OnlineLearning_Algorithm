#include <iostream>

using namespace std;
//이진검색은 정렬되어 있다는 것을 가정한다.
static int BinarySearch(int data[], int target,int begin, int end)
{
    //검색할 데이터가 없다면
    if(begin>end)
    {
        return -1;
    }
    else
    {
        //가운데 값 middle을 지정해준다
        int middle =(begin+end)/2;
        
        int compResult = target-data[middle];
        
        //compResult가 0 이면 --> 찾는 값과 같다면 middle의 위치 반환
        if(compResult ==0)
        {
            return middle;
        }
        //middle에 있는 값이 target보다 큼, middle보다 작은 위치에서 검색
        else if(compResult < 0)
        {
            return BinarySearch(data, target, begin, middle -1);
        }
        //middle에 있는 값이 target보다 작음, middle보다 큰 위치에서 검색
        else
        {
            return BinarySearch(data, target, middle+1, end);
        }
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
    
    cout << "Searching (7)..." << endl;
    cout << "Position of (7) is " << BinarySearch(myData,7,0,4) << endl;
}