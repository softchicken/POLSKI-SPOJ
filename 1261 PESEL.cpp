/*
POLISH SPOJ
http://pl.spoj.com/problems/JPESEL/
https://github.com/softchicken/
*/
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    long long int PESEL;
    long long int bufor;
    int j=10;
    int arrValues [] = {1,3,1,9,7,3,1,9,7,3,1};
    int testNumber;
    cin>>testNumber;
    while(testNumber>0)
    {
        int modulo=0;
        int counter=0;
        cin>>PESEL;
        for(int i=0; i<=10; i++)
        {
            bufor = (PESEL-modulo)/(pow(j,i));
            modulo = bufor % j;
            counter = counter + (modulo*arrValues[i]);
        }
        if(counter%10==0) cout<<"D"<<endl;
        else cout<<"N"<<endl;
        testNumber--;
    }
    return 0;
}
