#include <iostream>

using namespace std;

static int Search(int data[], int begin, int end, int target)
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
        
        //middle에서 target을 찾았다면
        if(target==data[middle])
        {
            return middle;
        }
        int index = Search(data, begin, middle -1, target);
        
        //index가 -1아니라면 -->target을 찾음
        if(index!=-1)
        {
            return index;
        }    
        //아직 못찾았다면 middle+1 에서 end까지의 위치에서 target을 찾는다.
        else
        {
            return Search(data, middle+1, end, target);
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
    
    cout << "Searching(5)..." << endl;
    cout << "Position of (5) is " << Search(myData,0,4,5) << endl;
}