#include <iostream>

using namespace std;

static void printChars(string str)
{
    if(str.length()==0)
    {
        return;        
    }
    else
    {
        cout << str.front();
        printChars(str.substr(1));
    }    
}

int main()
{
    string str = "abc";  

    cout << "Printing..." << endl;
    printChars(str);
}
