/*
POLISH SPOJ
http://pl.spoj.com/problems/CALC2/
*/
#include <iostream>

using namespace std;

int main()
{
    int xValue,yValue;
    char opMark;
    int arrTen[10];
    while(cin>>opMark>>xValue>>yValue){
        switch (opMark){
            case 'z':
            arrTen[xValue]=yValue;
            break;
            case '+':
            cout<<arrTen[xValue]+arrTen[yValue]<<endl;
            break;
            case '-':
            cout<<arrTen[xValue]-arrTen[yValue]<<endl;
            break;
            case '*':
            cout<<arrTen[xValue]*arrTen[yValue]<<endl;
            break;
            case '/':
            cout<<arrTen[xValue]/arrTen[yValue]<<endl;
            break;
            case '%':
            cout<<arrTen[xValue]%arrTen[yValue]<<endl;
            break;
            case NULL:
            return 0;
            default:
            return 0;
            }
    }
}
