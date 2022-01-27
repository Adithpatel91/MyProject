#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    int N;

    cin>>N;

    int A[N];

    for(int j = 0 ; j < N ; j++)
    {
        cin>>A[j];

    }

    for(int i = 0 ; i < N ; i++)
    {
        if(A[i] < 0)
        {
            cout<<A[i]<<" ";        
        }
    }

    
    return 0;
}