int Solution::solve(string A) {

    long int count = 0;
    long int ans = 0;

    for(int i = 0 ; A[i] !='\0' ; i++)
    {
        if(A[i] == 'A')
        {
            count++;
        }
        if(A[i] == 'G')
        {
            ans = ans + count;
        }
    }
    return ans;
}
