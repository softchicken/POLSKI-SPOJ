/*
POLISH SPOJ
http://pl.spoj.com/problems/PP0602A/
*/
#include <iostream>

using namespace std;

int main()
{
    int howManyCells,cellValue,howManyTests;
    cin>>howManyTests;
    while(howManyTests>=1)
    {
        cin>>howManyCells;
        int ourArray[howManyCells]={};
        for(int i=1;howManyCells>=i;i++)
        {
            cin>>cellValue;
            ourArray[i-1]=cellValue;
        }
        for(int i=1; howManyCells>i;i++)
        {
            cout<<ourArray[i]<<" ";
            i++;
        }
        for(int i=0; howManyCells>i;i++)
        {
            cout<<ourArray[i]<<" ";
            i++;
        }
        cout<<endl;
        howManyTests--;
    }
    return 0;
}
