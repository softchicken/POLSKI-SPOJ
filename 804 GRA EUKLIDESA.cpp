/*
POLISH SPOJ
http://pl.spoj.com/problems/EUCGAME/
*/
#include <iostream>

using namespace std;

int main()
{
    int howMany;
    cin>>howMany;
    while(howMany>=1)
    {
        int a,b;
        cin>>a>>b;

        do
        {
            if(a>b) a=a-b;
            else if(b>a) b=b-a;
        }
        while(a!=b);

        cout <<a+b<<endl;
        howMany--;
    }
    return 0;
}
