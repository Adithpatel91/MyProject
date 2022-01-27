vector<int> Solution::solve(vector<int> &A) {

    vector<int> ResultantArray;
    int ans = 0;

    int FirstNumber = 0;
    int secondNumber = 0;

  //  sort(A.begin(),A.end());

    for(int i = 0 ; i < A.size() ; i++)
    {
        ans = ans ^ A[i];
    }

    int mask = (ans & (ans-1)) ^ ans;

    for(int i = 0 ; i < A.size(); i++)
    {
        if(A[i] & mask)
        {
            FirstNumber = FirstNumber ^ A[i];
        }
        else
        {
            secondNumber = secondNumber ^ A[i];
        }


    }

    ResultantArray.push_back(FirstNumber);
    ResultantArray.push_back(secondNumber);

    sort(ResultantArray.begin(),ResultantArray.end());

return ResultantArray;
}

