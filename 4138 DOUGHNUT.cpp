/*
POLISH SPOJ
http://pl.spoj.com/problems/DOUGHNUT/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    int catsAmount,harryPower,donutWeight,allDonutsWeight,howMany;
    cin>>howMany;
    while(howMany>=1)
    {
        cin>>catsAmount>>harryPower>>donutWeight;
        allDonutsWeight=catsAmount*donutWeight;
        if(harryPower>=allDonutsWeight) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        howMany--;
    }
    return 0;
}
