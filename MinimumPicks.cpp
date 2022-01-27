int Solution::solve(vector<int> &A) {

    int EvenMaxNumber = INT_MIN;

    for(int i = 0 ; i < A.size() ; i++)
    {
        if(A[i] % 2 == 0)
        {
            if(A[i] > EvenMaxNumber)
            {
                 EvenMaxNumber = max(A[i],EvenMaxNumber);
            }
        }
    }

    int OddMinNumber = INT_MAX;

    for(int j = 0 ; j < A.size() ; j++)
    {
        if(A[j] % 2)
        {
            if(A[j] < OddMinNumber)
            {
                OddMinNumber = min(A[j],OddMinNumber);
            }
        }

   }

    return (EvenMaxNumber - OddMinNumber);

}
