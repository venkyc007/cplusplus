#include <iostream>
#include <cmath>
using namespace std;

//we are the championss
int main()
{
    int arr[]= {0, 1, 1, 0, 2, 2, 1, 0, 2, 1, 0, 0, 2, 1};
    int j=-1;
    int k=0;

    for(int i=0; i<14; i++)
    {
        if (arr[i]==0)
        {
        int z;
        j=j+1;
        z= arr[i]+arr[j];
        arr[i]= z-arr[i];
        arr[j]= z-arr[i];
        }
        
    }

     for(int i=0; i<14; i++)
    {
        if (arr[i]==1)
        {
        int z;
        k=k+1;
        z= arr[i]+arr[j+k];
        arr[i]= z-arr[i];
        arr[j+k]= z-arr[i];
        }
        
    }
    
    for (int l = 0; l < 14; l++) 
    {
        cout << arr[l] << " ";
    }
    cout << endl;
    
    return 0;



}