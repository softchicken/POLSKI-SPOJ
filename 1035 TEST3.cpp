/*
POLISH SPOJ
http://pl.spoj.com/problems/PP0601A2/
*/
#include <iostream>

using namespace std;

int main()
{
    int testNumber,bufor=42;
    int counter=0;
    while(counter!=3)
    {
        cin>>testNumber;
        if((testNumber==42)&&(bufor==42))
        {
            cout<<testNumber<<endl;
        }
        else if((testNumber==42)&&(bufor!=42))
        {
            cout<<testNumber<<endl;
            bufor = testNumber;
            counter++;
        }
        else
        {
            cout<<testNumber<<endl;
            bufor = testNumber;
        }
    }
    return 0;
}
