#include <iostream>
#include <vector>
using namespace std;
// Scanner in이 참조하는 파일로부터  n개의 정수를 입력받아 
// 배열 data의 data[0] ~ data[n-1] 에 저장한다.
class Scanner
{
public:
    Scanner(int n)
    {
        pos = 0;
        for (int i = 1; i <= n; i++)
        {
            myVector.push_back(i);
        }
    }

    vector<int> myVector;
    int pos;

    int nextInt()
    {
        int result;
        if (pos < myVector.size())
        {
            result = myVector.at(pos);
            pos++;
            return result;
        }
        else
        {
            cout << "End of data..." << endl;
            cout << "Relocation postion to first" << endl;
        }
    }
};

static void readFrom(int n, int data[], Scanner in)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        data[n - 1] = in.nextInt();
        readFrom(n - 1, data, in);        
    }
}

int main()
{
    Scanner in(5);
    cout << "value saved in Scanner" << endl;
    for (auto it = in.myVector.begin(); it != in.myVector.end(); ++it)
    {
        cout << *it << ",";
    }
   
    cout << endl << endl;
    int data[5];
    readFrom(5, data, in);
    
    cout << "value saved in data" << endl;
    for(int i =0; i<sizeof(data)/4; i++)
    {
        cout <<data[i];
        if(i<(sizeof(data)/4)-1)
        {
            cout << ", ";
        }
        else
        {
            cout << endl;
        }        
    }
}
