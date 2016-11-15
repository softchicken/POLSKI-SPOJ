#include <iostream>
using namespace std;
int main()
{
    int number,test;
    string result;
    cin>>test;

    for(int n=1; n<=test; n++)
    {
    cin>>number;

    if(number==1) cout<<"NIE"<<endl;
    else if (number==2) cout<<"TAK"<<endl;
    else if(number>2)
    {
        string result;
        result = "TAK";
             for(int i=2; i<number; i++)
            {
                if((number%i)==0)
                {
                    result = "NIE";
                }
            }
                cout<<result<<endl;
    }
    }
    return 0;
}
