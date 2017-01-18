/*
POLISH SPOJ
http://pl.spoj.com/problems/PRIME_T/
*/

#include <iostream>

using namespace std;

int main()
{
    int testFig,howManyTests;
    string ifPrime;
    cin>>howManyTests;

    for(int n=1; n<=howManyTests; n++)
        {
        cin>>testFig;
        if(testFig==1) cout<<"NIE"<<endl;                   //IF STATEMENT FOR CHECKING IF FIGURE IS PRIME
        else if (testFig==2) cout<<"TAK"<<endl;
        else if(testFig>2)
            {
                ifPrime = "TAK";
                for(int i=2; i<testFig; i++)
                {
                    if((testFig%i)==0)
                        {
                            ifPrime = "NIE";
                        }
                }
                cout<<ifPrime<<endl;
            }
        }
    return 0;
}
