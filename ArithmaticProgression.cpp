int Solution::solve(vector<int> &A) {

    sort(A.begin(),A.end());

    int NextTerm = 0;

    int flag = 0;

    int difference = (A[1] - A[0]);


    for(int i = 0 ; i < A.size() ; i++)
    { 
        if(i == 0)
        {
            NextTerm = A[0];
        }
        else
        NextTerm = NextTerm + difference;

        if(NextTerm == A[i])
        {
            flag = 1;

        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
