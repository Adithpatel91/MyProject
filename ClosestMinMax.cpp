int Solution::solve(vector<int> &A) {

    int MaxElement = INT_MIN;
    int MinElement = INT_MAX;

    int MaxIndex;
    int MinIndex;

    int ans = A.size();

    for(int i = 0 ; i < A.size() ; i++)
    {
        if(A[i] > MaxElement)
        {
            MaxElement = max(MaxElement,A[i]);
        }
        else
        {
            MinElement = min(MinElement,A[i]);
        }
    }
    for(int j = 0 ; j < A.size() ; j++)
    {
        if(A[j] == MaxElement)
        {
            MaxIndex = j;
        }
        if(A[j] == MinElement)
        {
            MinIndex = j;
        }

        ans = min(abs(MinIndex - MaxIndex)+1, ans);
    }
    return ans;
}
