/*
POLISH SPOJ
http://pl.spoj.com/problems/PA05_POT/
*/
#include <iostream>

using namespace std;
int power(int a, int b)  //RETURNS LAST DIGIT OF ESCALATING
{
    int endResult [9][4]={{1,1,1,1},{4,6,8,2},{9,1,7,3},{6,6,4,4},{5,5,5,5},{6,6,6,6},{9,1,3,7},{4,6,2,8},{1,1,9,9}};
    if (((b%2)==0)&&((b%4)!=0)) cout<<endResult[(a%10)-1][0]<<endl;
    else if (((b%4)==0)&&((b%2)==0)) cout<<endResult[(a%10)-1][1]<<endl;
    else if ((((b-1)%2)==0)&&(((b-1)%4)!=0)) cout<<endResult[(a%10)-1][2]<<endl;
    else cout<<endResult[(a%10)-1][3]<<endl;
}

int main()
{
    int x,y,howMany;
    cin>>howMany;
    for (int i=1; i<=howMany; i++)
    {
        cin>>x>>y;
        switch(x%10)
        {
            case 1:
                cout<<1<<endl;
                break;
            case 2:
                power(x,y);
                break;
            case 3:
                power(x,y);
                break;
            case 4:
                power(x,y);
                break;
            case 5:
                cout<<5<<endl;
                break;
            case 6:
                cout<<6<<endl;
                break;
            case 7:
                power(x,y);
                break;
            case 8:
                power(x,y);
                break;
            case 9:
                power(x,y);
                break;
            default:
                cout<<0<<endl;
                break;
        }
    }
    return 0;
}
