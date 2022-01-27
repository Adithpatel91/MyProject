int Solution::solve(int A) {


    int count = 0;
    for(int i = 0 ; i < sizeof(int)*8 ; i++)
    {
        if((A>>i)&1)
        {
            count++;
        }
    }
    return count;
}