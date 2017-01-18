/*
POLISH SPOJ
http://pl.spoj.com/problems/PP0602D/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    int rollNumber,howManyNumbers;
    cin>>howManyNumbers>>rollNumber;
    int arrayRow[howManyNumbers];
    int arrayValue;
    for(int i=(howManyNumbers-rollNumber);i<howManyNumbers;i++)
    {
        cin>>arrayValue;
        arrayRow[i]=arrayValue;
    }
    for(int i=0;i<(howManyNumbers-rollNumber);i++)
    {
        cin>>arrayValue;
        arrayRow[i]=arrayValue;
    }
    for(int i=0;i<howManyNumbers;i++)
    {
        cout<<arrayRow[i]<<" ";
    }
    return 0;
}
