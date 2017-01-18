/*
POLISH SPOJ
http://pl.spoj.com/problems/STOS/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    char actionMark;
    int stackArray[10];
    int counter=0;
    int cellValue;
    while(cin>>actionMark)
    {
        switch (actionMark)
        {
            case '+':
            if(counter==10) cout<<":("<<endl;
            else
            {
                cin>>cellValue;
                stackArray[counter] = cellValue;
                counter++;
                cout<<":)"<<endl;
            }
        break;
        case '-':
            if(counter==0) cout<<":("<<endl;
            else
            {
                counter--;
                cout<<stackArray[counter]<<endl;
            }
        break;
        }
    }
    return 0;
}
