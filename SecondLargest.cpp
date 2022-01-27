#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    int T,l;

    int flag = 0;

    cin>>T;

    for(int i = 0 ; i < T ; i++)
    {
        int length;
        int input;
        cin>>length;

        int MaxIndex = -1;

        vector<int> arr;

        for(long int j = 0 ; j < length ; j++)
        {
            cin>>input;
            arr.push_back(input);     
        }
        long int MaxNumber = INT_MIN;

        for(int k = 0 ; k < arr.size() ; k++)
        {
            if(arr[k] > MaxNumber)
            {
                MaxNumber = arr[k];
                MaxIndex = k;
            }
        }
        long int SecondMax = -1;

        for(l = 0 ; l < arr.size() ; l++)
        {
            if((SecondMax < arr[l]) && (l != MaxIndex))
            {
                SecondMax = arr[l];
            }
        }
        cout<<SecondMax<<endl;
    }
    
    return 0;
}