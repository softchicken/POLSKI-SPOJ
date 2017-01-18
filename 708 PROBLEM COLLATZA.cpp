/*
POLISH SPOJ
http://pl.spoj.com/problems/PTCLTZ/
https://github.com/softchicken/
*/
#include <iostream>

int n;
using namespace std;

int collatzProblem(int s)
{
    if(s==1) return n;
    n++;
    if(s%2!=0) return collatzProblem((3*s)+1);
    else if(s%2==0) return collatzProblem(s/2);
}

int main()
{
    int howManyTests,x;
    cin>>howManyTests;
    while(howManyTests>=1)
    {
        cin>>x;
        n=0;
        cout<<collatzProblem(x)<<endl;
        howManyTests--;
    }
    return 0;
}
