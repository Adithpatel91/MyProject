int Solution::solve(vector<int> &A, int B) {

    int count = 0;
    int flag = 0;

    for(int i = 0 ; i<A.size() ; i++)
    {

        if(A[i] > B)
        {
            count++;
            A[i] = -1;

        }
        if(A[i] == B)
        {
            flag = 1;
        }

    }
    if(flag == 1)
    {
        return count;
    }
    else
    {
        return -1;
    }

}
