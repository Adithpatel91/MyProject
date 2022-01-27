int Solution::solve(string A) {

    int Val = 0;
    int r = 1;

    int element;

    int number = 0;

 //   int IntVal = atoi(A)

    for(int i = 0 ; i < A.length() ; i++)
    {
        element = A[i] - 48;
        number = 10 * number + element;
    }

    if(number % 8 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
