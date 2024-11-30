#include <iostream>
#include <cmath>
using namespace std;

int main()
{

float h;
cout<< "enter height of tower:";
cin>> h;

float s;
cout<< "enter speed of ball:";
cin>> s;

float x;
cout<< "enter angle of ball in radians:";
cin>> x;

float dis;
dis= s*cos(x)*(s*sin(x)+ sqrt(s*s*sin(x)*sin(x)+20*h))/10;

cout<< "distance travelled by ball is:" <<dis;

return 0;

}
