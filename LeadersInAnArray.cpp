vector<int> Solution::solve(vector<int> &A) {
    vector<int> OutputArr;

    int size = A.size();

    int MaxValue = INT_MIN;

    for(int i = size-1 ; i >= 0 ; i--)
    {
        if(A[i] > MaxValue)
        {
            MaxValue = max(MaxValue,A[i]);
            OutputArr.push_back(MaxValue);
        }
    }
    
    return OutputArr;

}