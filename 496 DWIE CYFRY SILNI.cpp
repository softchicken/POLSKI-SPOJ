/*
POLISH SPOJ
http://pl.spoj.com/problems/FCTRL3/
https://github.com/softchicken/
*/
#include <string>
#include <iostream>

using namespace std;
int main()
{
	int zczegoSilnia;
    int liczbaPowtorzen;
    cin>>liczbaPowtorzen;
    for(int j=1; j<=liczbaPowtorzen; j++)
    {
    	int x=1;
    	cin>>zczegoSilnia;
        if(zczegoSilnia<=9)
        {
            for(int i=1; i<=zczegoSilnia; i++)
        {
            x=x*i;
        }
            string stringSilnia = to_string(x);
            int d = stringSilnia.length();
            if(d<=1)
            {
            cout<<endl<<0<<" "<<stringSilnia[d-1];
            }
            else cout<<endl<<stringSilnia[d-2]<<" "<<stringSilnia[d-1];
        }
        else cout<<endl<<0<<" "<<0;
    }
    return 0;
}
