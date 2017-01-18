/*
POLISH SPOJ
http://pl.spoj.com/problems/ROWNANIE/
*/
#include <iostream>

using namespace std;

int main()
{
    float aValue,bValue,cValue,deltaValue;
    while(cin>>aValue>>bValue>>cValue)
    {
        deltaValue = (bValue*bValue) - (4 * aValue * cValue);
        if(deltaValue>0) cout<<2<<endl;
        else if(deltaValue==0) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
