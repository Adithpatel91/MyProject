int Solution::titleToNumber(string A) {

    int Val = 0;

    for(int i = 0 ; i <A.length() ; i++)
    {

        Val = Val * 26;

        Val = Val + A[i] - 'A'+1;

    }

    return Val;
}
