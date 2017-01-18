/*
POLISH SPOJ
http://pl.spoj.com/problems/KC004/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    int numberToSearch;
    int howManyInSerie;
    int serieNumber;

    while(cin>>numberToSearch>>howManyInSerie)
    {
        int buffer=0;

        for(int i=1; i<=howManyInSerie; i++)
        {
            cin>>serieNumber;
            if(serieNumber==numberToSearch) buffer++;
        }
        cout<<buffer<<endl;
    }
    return 0;
}
