/*
POLISH SPOJ
http://pl.spoj.com/problems/ETI06F1/
*/
#include <iostream>

using namespace std;

int main()
{
    double sphereRadius,circleDiameter,circleArea;
    double pi=3.141592654;
    cout.setf(ios::fixed);      // console output score will be fixed (without this line will be scientific like 123.4e+002)
    cout.precision(2);          // sets precision of console output
    cin >> sphereRadius >> circleDiameter;
    circleArea = pi*((sphereRadius*sphereRadius)-(0.25*circleDiameter*circleDiameter));     // SPOJ task result - area of the circle between two spheres
    cout<<endl<<circleArea;
    return 0;
}
