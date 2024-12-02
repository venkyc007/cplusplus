#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n;
    cout<< "Enter number of letters:";
    cin>> n;
    char word[n];
    for(int i=0; i<n; i++)
    {
        cout<< "enter letter in lowercase" << i+1;
        cin>> word[i];
        
    }
    for(int i=0; i<n; i++)
    {
        cout<< word[i];
        
        
    }

    
    for(int j=0; j<n-1; j++)
    {
        //cout<<j;
        for(int k=j+1; k<=n; k++)
        {
            if(word[j]==word[k])
            {
                //cout<<j;
                //cout<<word[j];
                word[j]='X';
            }
            //cout<<j;
            //cout<<word[j];
            
        }
    }
    //cout<<word[0];

     cout << "The word without repeated letters is:" << endl;
    for (int l = 0; l < n; l++) 
    {
        cout << word[l] << " ";
    }
    cout << endl;

    return 0;

}