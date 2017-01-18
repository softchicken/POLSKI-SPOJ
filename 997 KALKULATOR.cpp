/*
POLISH SPOJ
http://pl.spoj.com/problems/CALC/
*/
#include <iostream>

using namespace std;

int main()
{
    int xValue,yValue;
    char opMark;
    while(cin>>opMark>>xValue>>yValue){
        switch (opMark){
            case '+':
            cout<<xValue+yValue<<endl;
            break;
            case '-':
            cout<<xValue-yValue<<endl;
            break;
            case '*':
            cout<<xValue*yValue<<endl;
            break;
            case '/':
            cout<<xValue/yValue<<endl;
            break;
            case '%':
            cout<<xValue%yValue<<endl;
            break;
            case NULL:
            return 0;
            default:
            return 0;
            }
    }
}
