/*
POLISH SPOJ
http://pl.spoj.com/problems/JSPACE/
https://github.com/softchicken/
*/
#include <iostream>

using namespace std;

int main()
{
    string textMessage;
    while(getline(cin,textMessage))
    {
        int buffer=0;
        for(int i=0; i<textMessage.length(); i++)
        {
            if(textMessage[i]>=97&&buffer==0&&textMessage[i]<=122)
            {
                cout<<char(textMessage[i]-32);
                buffer=1;
            }
            else if(textMessage[i]==' ')
            {
                cout<<"";
                buffer=0;
            }
            else if(65<=textMessage[i]<=90)
            {
                cout<<textMessage[i];
                buffer=1;
            }
            else
            {
               cout<<textMessage[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
