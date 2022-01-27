#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    int N;

    cin>>N;
    
    int MyArr[N];

    for(int i = 0 ; i<N ; i++)
    {
        cin>>MyArr[i];
    }

    int B;

    cin>>B;

    B = B % N;

    for(int i = 0; i < N; i++)
    {
       if(i < B)
       {
            
           // Printing rightmost
           // kth elements
           cout << MyArr[N + i - B] << " ";
       }
       else
       {
            
           // Prints array after
           // 'k' elements
           cout << (MyArr[i - B]) << " ";
       }
    }
    cout << "\n";
}




    

