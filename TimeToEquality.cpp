int Solution::solve(vector<int> &A) {

    int MaxNumber = INT_MIN;

    int seconds = 0;

    int Abs_Value; 

    for(int i = 0 ; i < A.size() ; i++)
    {
        if(A[i] > MaxNumber)
        {
            MaxNumber = A[i];
        }

    }

    for(int i = 0 ; i < A.size() ; i++)
    {
        Abs_Value = abs(MaxNumber - A[i]);
        seconds = seconds + Abs_Value;
    }

    return seconds;
}