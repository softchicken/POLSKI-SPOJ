/*
POLISH SPOJ
http://pl.spoj.com/problems/PP0502B/
*/
#include <iostream>
using namespace std;

int main()
{
    int howMany;
    cin>>howMany;
    while(howMany>0)
    {
        int arrayCells;
        cin>>arrayCells;
        int arrayToReverse[arrayCells];
        for(int i=0; i<=(arrayCells-1);i++)
        {
            int cellNumber;
            cin>>cellNumber;
            arrayToReverse[i]=cellNumber;
        }
        while(arrayCells>=1)
        {
            cout<<arrayToReverse[arrayCells-1]<<" ";  //PRINTS ALL ARRAY ELEMENTS, BUT THE FIRST ARRAY ELEMENT WILL BE PRINTED ON THE END
            arrayCells--;
        }
        cout<<endl;
        howMany--;
    }
    return 0;
}
