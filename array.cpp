#include <iostream>
#include <cmath>
using namespace std;

// make array and flip dat boi
int main()
{
    float numbers[] = {12, 34, 3.4, 0.8291, 1};
    int j;
    for(int i=0; i<=4; i++)
    {
        
        j= 4-i;
        cout<< "your array is:" <<numbers[j]<< endl;
        
    }
    
    return 0;

}