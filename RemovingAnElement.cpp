#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    vector<int> MyArr;

    int N;
    cin>>N;

    int input;

    for(int i = 0 ; i < N ; i++)
    {
        cin>>input;

        MyArr.push_back(input);
    }

    int position;

    cin>>position;

    position--;

    int element = MyArr[position];

    vector<int> :: iterator it2;

    auto It3 = find ( MyArr.begin() , MyArr.end() ,element);

    MyArr.erase(It3);

    vector<int> :: iterator it;

    for(it = MyArr.begin() ; it < MyArr.end() ; it++)
    {
        cout<<*it<<" ";
    }  

    cout<<endl;
    
    return 0;

}