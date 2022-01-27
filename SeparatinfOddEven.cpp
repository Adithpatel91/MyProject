#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output


    int T;
    cin>>T;

    for(int i = 0 ; i < T ; i++)
    {
        int length;

        cin>>length;

        vector<int> MyArr;

        int input;

        for(int k = 0 ; k < length ; k++)
        {
            cin>>input;
            MyArr.push_back(input);
        }
        vector<int> MyEvenArr;
        vector<int> MyOddArr;

        for(int j = 0 ; j < MyArr.size() ; j++)
        {
            if(MyArr[j] % 2  == 0)
            {
                MyEvenArr.push_back(MyArr[j]);
             //   cout<<"even array"<<" "<<MyArr[j]; 
            }
            else if( MyArr[j] % 2)
            {
                MyOddArr.push_back(MyArr[j]);
            //    cout<<"odd array"<<" "<<MyArr[j]; 
            }
            else{
                /* Do Nothing */
            }
        }

        for(int k = 0 ; k < MyOddArr.size() ; k++)
        {
            cout<<MyOddArr[k]<<" ";
        }
        cout<<endl;

        for(int l = 0 ; l < MyEvenArr.size() ; l++)
        {
            cout<<MyEvenArr[l]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}