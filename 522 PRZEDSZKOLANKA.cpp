/*
POLISH SPOJ
http://pl.spoj.com/problems/PRZEDSZK/
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,nwd,howMany;
    cin>>howMany;
    while (howMany>=1)
    {
        cin>>a>>b;
        if (a<=b)
        {
            for(int i=1; i<=a; i++)
            {
                if(a%i==0&&b%i==0) nwd=i;
            }
        }
        else
        {
            for(int i=1; i<=b; i++)
            {
                if(a%i==0&&b%i==0) nwd=i;
            }
        }
        cout<<a*b/nwd<<endl;
        howMany--;
    }
    return 0;
}
