#include<iostream>

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

    int MaxNumber = MyArr[0];
    int MaxInArray;

    for(int i = 0 ; i < N ; i++)
    {
        if(MyArr[i] > MaxNumber)
        {
            MaxNumber = MyArr[i];
        }
    }

    int MinNumber = MaxNumber;

   for(int i = 0 ; i < N ; i++)
   {
       if(MyArr[i]<MinNumber)
       {
           MinNumber = MyArr[i];
       }
   }
   
   cout<<MaxNumber<<" "<<MinNumber<<endl;
    return 0;
}