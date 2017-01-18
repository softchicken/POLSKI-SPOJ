/*
POLISH SPOJ
http://pl.spoj.com/problems/GLUTTON/
*/
#include <iostream>
using namespace std;

int main()
{
    int peopleNumber,cookiesInBox,timeToEatOneCookie,howManyTests;

    cin >> howManyTests;
    for(int i=0;i<howManyTests;i++)
    {
        cin >> peopleNumber >> cookiesInBox;
        int boxesToBuy=0;
        for(int i=0;i<peopleNumber;i++)
        {
            cin>>timeToEatOneCookie;
            timeToEatOneCookie=86400/timeToEatOneCookie; //86400 SECONDS IN WHOLE DAY
            boxesToBuy=boxesToBuy+timeToEatOneCookie;
        }
        if(boxesToBuy%cookiesInBox==0) cout<<boxesToBuy/cookiesInBox<<endl;
        else cout<<(boxesToBuy/cookiesInBox)+1<<endl;
    }
    return 0;
}
