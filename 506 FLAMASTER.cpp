/*
POLISH SPOJ
http://pl.spoj.com/problems/FLAMASTE/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    string letterWorm;
    int testNumber;
    cin>>testNumber;

    while(testNumber>0)
    {
        cin>>letterWorm;
        size_t characterNumber = letterWorm.length();
        for(int j=0;j<characterNumber;j++)
        {
            int counter=1;
            while(letterWorm[j]==letterWorm[j+1])
            {
                counter++;
                j++;
            }
            if(counter>=3)
            {
                cout<<letterWorm[j]<<counter;
            }
            else if(counter==2)
            {
                cout<<letterWorm[j-1]<<letterWorm[j];
            }
            else if(counter==1)
            {
                cout<<letterWorm[j];
            }
        }
        cout<<endl;
        testNumber--;
    }
	return 0;
}
