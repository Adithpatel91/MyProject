int Solution::solve(string A) {

    int start = 0;
    int end = A.length()-1;

    int flag = 0;

    for(int i = start, j = end ; i<j ; i++,j--)
    {

        if(A[i] != A[j])
        {
            flag = 1;
        } 
    }

    if(flag == 1)
    {
        return 0;
    }
    return 1;
}