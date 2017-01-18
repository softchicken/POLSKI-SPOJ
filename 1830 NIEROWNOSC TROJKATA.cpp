/*
POLISH SPOJ
http://pl.spoj.com/problems/KC003/
*/
#include <iostream>

using namespace std;

int main()
{
    float a;
    float arrTriangle[3];
    while(cin>>a)           //STOPS WHEN THERE IS NO CONSOLE INPUTS
    {
        arrTriangle[0] = a; //SAVE CONSOLE INPUTS IN 3 ELEMENT ARRAY
        for(int i=1;i<3;i++)
        {
            cin>>a;
            arrTriangle[i] = a;
        }

        while(!((arrTriangle[0]<=arrTriangle[1])&&(arrTriangle[1]<=arrTriangle[2])))  //SORTS VALUES OF TRIANGLE SIDES
        {
           for(int i=0;i<2;i++)
            {   if(arrTriangle[i]>arrTriangle[i+1])
                {
                    a = arrTriangle[i];
                    arrTriangle[i] = arrTriangle[i+1];
                    arrTriangle[i+1] = a;
                }
            }
        }

        if((arrTriangle[0]+arrTriangle[1])>arrTriangle[2]) cout<<"1"<<endl; //CHECKS IF TRIANGLE CAN BE BUILD
        else cout<<"0"<<endl;
    }
    return 0;
}
