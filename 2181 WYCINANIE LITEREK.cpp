/*
POLISH SPOJ
http://pl.spoj.com/problems/PROGC05/
*/
#include <iostream>

using namespace std;

int main()
{
    char letterC;
    string letterWorm;
    while(cin>>letterC)
    {
        getline(cin,letterWorm);
        //FROM i=1 BECAUSE i=0 FOR letterWorm IS SPACEBAR;
        for(int i=0; i<letterWorm.length(); i++)
        {
            if(char(letterC)!=char(letterWorm[i])&&char(letterWorm[i])!=' ') cout<<letterWorm[i];
        }
        cout<<endl;
    }
    return 0;
}
