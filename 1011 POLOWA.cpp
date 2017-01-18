/*
POLISH SPOJ
http://pl.spoj.com/problems/POL/
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string readLine;
    int t;
    cin>>t;
    while(t>=1)
    {
        cin>>readLine;
        for(int i=0;i<(readLine.length()/2);i++)
        {
            cout<<readLine[i];
        }
        cout<<endl;
        t--;
    }
    return 0;
}
