#include <iostream>

using namespace std;

static int length(string str)
{
    if(str=="")
    {
        return 0;
    }
    else
    {
        return 1 + length(str.substr(1));
    }        
}

int main()
{
    string str = "abc";

    cout << length(str) << endl;
  
}
