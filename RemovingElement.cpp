int Solution::solve(vector<int> &A) {

    sort(A.begin(),A.end());

    int sum = 0;

    for(int i = 0 ; i < A.size() ; i++)
    {
        sum = sum + A[i] * (A.size()-i);
    }

    return sum;
}
