/*
POLISH SPOJ
http://pl.spoj.com/problems/PTROL/
*/
#include <iostream>

using namespace std;

int main()
{
    int howManyCells,cellNumber,howManyTests;
    cin>>howManyTests;
    while(howManyTests>0)
    {
        cin>>howManyCells;
        int ourArray[howManyCells];
        cin>>cellNumber;
        ourArray[howManyCells-1]=cellNumber;

        for(int i=0; i<howManyCells-1;i++)
        {
            cin>>cellNumber;
            ourArray[i]=cellNumber;
        }

        for(int i=0;i<howManyCells;i++)
        {
            cout<<ourArray[i]<<" ";
        }
        cout<<endl;
        howManyTests--;
    }
    return 0;
}
