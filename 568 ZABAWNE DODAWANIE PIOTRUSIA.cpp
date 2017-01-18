/*
POLISH SPOJ
http://pl.spoj.com/problems/BFN1/
*/
#include <iostream>

using namespace std;

int reverseNumber(int toReverse)
{
    int remainder=0,afterReverse=0;
    while(toReverse!=0)
    {
        remainder=toReverse%10;
        afterReverse=((afterReverse*10)+remainder);
        toReverse=toReverse/10;
    }
    return afterReverse;
}

int main()
{
    int n, howMany;
    cin>>howMany;
    while(howMany>0)
    {
        int sumCounter=0;
        cin>>n;
        while(reverseNumber(n)!=n)
        {
            n=n+reverseNumber(n);
            sumCounter++;
        }
        cout<<n<<" "<<sumCounter<<endl;
        howMany--;
    }
    return 0;
}
