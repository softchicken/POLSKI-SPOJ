/*
POLISH SPOJ
http://pl.spoj.com/problems/KC009/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    string wordToReverse;
    while(cin>>wordToReverse)
    {
        for(int i=wordToReverse.length()-1; i>=0; i--)
        {
            cout<<wordToReverse[i];
        }
        cout<<endl;
    }
    return 0;
}
