/*
POLISH SPOJ
http://pl.spoj.com/problems/WSEGA/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    int howManyTests, wormParts, partLegs, buffer;
    cin>>howManyTests;
    while(howManyTests>0)
    {
        cin>>wormParts;
        buffer = 0;
        for(int i=0; i<wormParts; i++)
        {
            cin>>partLegs;
            buffer = buffer + partLegs;
        }
        cout<<buffer+(wormParts-1)<<endl;
        howManyTests--;
    }
    return 0;
}
