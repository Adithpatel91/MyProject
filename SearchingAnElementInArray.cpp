#include<bits/stdc++.h>
using namespace std;

int main(){
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    int T;

    int flag = 0;
       cin>>T;

    for(int i = 0 ; i<T ; i++)
    {
        int length;

        cin>>length;

        int Arr[length];

        for(int j = 0 ; j < length ; j++)
        {
            cin>>Arr[j];
        }
        int B;
        cin>>B;

        for(int j = 0 ; j < length ; j++)
        {
            if(Arr[j] == B)
           {
               flag = 1;
                break;                 
           }
           else
           {
                flag = 0; 
           }
        }
        if(flag == 1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
  
    return 0;
}