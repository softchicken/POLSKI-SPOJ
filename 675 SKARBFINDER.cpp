/*
POLISH SPOJ
//http://pl.spoj.com/problems/SKARBFI/
https://github.com/softchicken/
*/

#include <iostream>

using namespace std;

int worldDirection, North, South, West, East,stepsToGo;
int howManyPoints;

void getDirections(); //FUNCTION TO READ TREASURE DIRECTIONS
int getResult();     // FUNCTION TO GIVE RESULT WITH THE CLOSEST WAY TO THE TREASURE

int main()
{
    int dataPackages;
    cin>>dataPackages;
    while(dataPackages>=1)
          {
            getDirections();
            getResult();
            dataPackages--;
          }
    return 0;
}

void getDirections()
{
    North=0;
    South=0;
    West=0;
    East=0;
    cin>>howManyPoints;
    for(int i=0;i<howManyPoints;i++)
    {
        cin>>worldDirection;
        switch(worldDirection)
        {
        case 0:
            cin>>stepsToGo;
            North+=stepsToGo;
            break;
        case 1:
            cin>>stepsToGo;
            South+=stepsToGo;
            break;
        case 2:
            cin>>stepsToGo;
            West+=stepsToGo;
            break;
        case 3:
            cin>>stepsToGo;
            East+=stepsToGo;
            break;
        default:
            break;
        }
    }
}

int getResult()
{
    if(North==South&&West==East)    cout<<"studnia"<<endl;
    if(North>South)                 cout<<"0 "<<North-South<<endl;
    else if(South>North)            cout<<"1 "<<South-North<<endl;
    if(West>East)                   cout<<"2 "<<West-East<<endl;
    else if(East>West)              cout<<"3 "<<East-West<<endl;
}
