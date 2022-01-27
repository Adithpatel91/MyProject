string Solution::solve(string A) {

    int end = A.length() - 1;
    int start = 0;

    for(int i = 0 , j = end  ; i < j ; i++ , j--)
    {
        swap(A[i],A[j]);
    }

    return A;
}
