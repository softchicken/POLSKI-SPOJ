#include <iostream>
//http://pl.spoj.com/problems/BINOMS/
using namespace std;

int main()
{
    long double k, n,bufor;
    cout.precision(0);                          // PRECISION OF COUT
    int howManyTests;
    cin>>howManyTests;
    while(howManyTests>=1)
    {
        cin>>n>>k;
        if (k==0||k==n) bufor=1;
        else if(n>k)
        {
        bufor=1;
        for(long double i=0;i<k;i++)
        {
            bufor*=(n-i)/(k-i);
        }
        }
        cout<<fixed<<bufor<<endl;               //FIXED CHANGE COUT OF bufor TO FIXED
        howManyTests--;
    }
    return 0;
}
