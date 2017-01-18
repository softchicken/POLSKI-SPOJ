/*
POLISH SPOJ
http://pl.spoj.com/problems/TABLICA/
*/

#include <iostream>

using namespace std;

int main()
{
    int myArray[100];
    int cellValue,counter=0;

        while(cin>>cellValue) //VALUES SAVE TO THE ARRAY CELLS
        {
            myArray[counter]=cellValue;
            counter++;
        }
        for(int i=counter-1;i>=0;i--) //PRINTS BACKWARD
        {
            cout<<myArray[i]<<" ";
        }
    return 0;
}
