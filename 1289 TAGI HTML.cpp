/*
POLISH SPOJ
http://pl.spoj.com/problems/JHTMLLET/
*/
#include <iostream>

using namespace std;

int main()
{
    string htmlTagLine;
    while(getline(cin,htmlTagLine))
    {
        int buffer=0;
        for(int i=0; i<htmlTagLine.length(); i++)
        {
            if(htmlTagLine[i]=='<')
            {
                cout<<char(htmlTagLine[i]);
                buffer=1;
            }
            else if(htmlTagLine[i]>=97&&buffer==1&&htmlTagLine[i]<=122)
            {
                cout<<char(htmlTagLine[i]-32);
            }
            else if(htmlTagLine[i]=='>')
            {
                cout<<char(htmlTagLine[i]);
                buffer=0;
            }
            else
            {
               cout<<htmlTagLine[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
