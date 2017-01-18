/*
POLISH SPOJ
http://pl.spoj.com/problems/PP0604A/
https://github.com/softchicken/
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numberOfTests;
    cin>>numberOfTests;
    while(numberOfTests>0)
    {
        int howManyNumbers;
        cin>>howManyNumbers;
        float numberArray[howManyNumbers];
        float bufferNumber = 0;
        float sumValue = 0;
        float averageNumber;

        for(int i=0;i<howManyNumbers; i++)
        {
            cin>>bufferNumber;
            numberArray[i] = bufferNumber;
            sumValue = sumValue + bufferNumber;
        }
        averageNumber = sumValue/howManyNumbers;

        bufferNumber = numberArray[0];
        for(int i=0; i<howManyNumbers-1; i++)
        {
            if(fabs(averageNumber-bufferNumber)>fabs(averageNumber-numberArray[i+1])) bufferNumber = numberArray[i+1];
        }
        cout << bufferNumber << endl;

        numberOfTests--;
    }
    return 0;
}
