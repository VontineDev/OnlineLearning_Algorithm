#include <iostream>

using namespace std;

static void printCharsReverse(string str)
{
    if(str.length()==0)
    {
        return;        
    }
    else
    {        
        printCharsReverse(str.substr(1));
        cout << str.front();
    }    
}

int main()
{
    string str = "abc";  

    cout << "Printing..." << endl;
    printCharsReverse(str);
}
