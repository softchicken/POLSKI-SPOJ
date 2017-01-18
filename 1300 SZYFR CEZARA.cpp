/*
POLISH SPOJ
http://pl.spoj.com/problems/JSZYCER/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    string wordSeries;
    while(getline(cin,wordSeries))
    {
        for(int i=0; i<wordSeries.length(); i++)
        {
            if(wordSeries[i]==' ') cout<<wordSeries[i];
            else if(wordSeries[i]=='X') cout<<"A";
            else if(wordSeries[i]=='Y') cout<<"B";
            else if(wordSeries[i]=='Z') cout<<"C";
            else cout<<char(wordSeries[i]+3);
        }
        cout<<endl;
    }
    return 0;
}
