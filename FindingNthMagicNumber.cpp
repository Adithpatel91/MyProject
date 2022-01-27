int Solution::solve(int A) {

    int sum = 0;

    for(int i = 0 ; i < 31 ; i++)
    {
        if((A>>i)&1)
        {
            sum = sum + pow(5,i+1);
        }
    }

    return sum;
}
