#include <iostream>
#include <cmath>
using namespace std;

// Throw the ball and find the distance it travelled
int main()
{
    //input height of ball initially
    float height;
    cout<< "enter height of tower in m:";
    cin>> height;
    //input initial speed of ball
    float speed;
    cout<< "enter speed of ball in m/s:";
    cin>> speed;
    //input angle of projection
    float angle;
    cout<< "enter angle of ball in radians:";
    cin>> angle;
    //calculate the horizontal distance travelled by the ball
    float distance;
    distance= speed*cos(angle)*(speed*sin(angle)+ sqrt(speed*speed*sin(angle)*sin(angle)+20*height))/10;

    cout<< "distance travelled by ball is:" <<distance;

    return 0;

}

