/*
POLISH SPOJ
http://pl.spoj.com/problems/JWSPLIN/
*/
#include <iostream>

using namespace std;

int main()
{
    int howManyTests;
    int x1,x2,x,y1,y2,y;
    cin>>howManyTests;
    while(howManyTests>0)
    {
        cin>>x1>>y1>>x2>>y2>>x>>y;
        if(((x2-x1)*(y1-y))==((y2-y1)*(x1-x))) cout<<"TAK"<<endl;
        else cout<<"NIE"<<endl;
        howManyTests--;
    }
    return 0;
}
