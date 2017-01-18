/*
POLISH SPOJ
http://pl.spoj.com/problems/NWW/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

unsigned long long int a1,nww;
unsigned long long int numbersInTest,howManyTests;
unsigned long long int nwd(unsigned long long int a,unsigned long long int b) //FUNCTION RETURNS GCD(GREATEST COMMON DIVISOR) OF TWO VARIABLES
{
    unsigned long long int c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

int main()
{
    cin>>howManyTests;
    for(unsigned long long int i=0; i<howManyTests; i++)
    {
        cin>>numbersInTest;
        if(numbersInTest!=0)
        {
            cin>>nww;
            for(unsigned long long int j=1; j<numbersInTest; j++)
            {
                cin>>a1;
                nww=nww/nwd(nww,a1)*a1; // LCM-LOWEST COMMON MULTIPLE
            }
            cout<<nww<<endl;
        }
    }
    return 0;
}
