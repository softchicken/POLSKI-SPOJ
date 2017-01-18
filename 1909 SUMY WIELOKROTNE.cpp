/*
POLISH SPOJ
http://pl.spoj.com/problems/KC008/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    long long int numberSeries,buffer=0,bufferAll=0;
    while(cin>>numberSeries)
    {
        if(numberSeries!=0) buffer = buffer + numberSeries;
        else
        {
            cout<<buffer<<endl;
            bufferAll = bufferAll + buffer;
            buffer = 0;
        }
    }
    cout<<bufferAll<<endl;
    return 0;
}
