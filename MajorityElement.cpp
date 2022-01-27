int Solution::majorityElement(const vector<int> &A) {

    int count = 1;
    int frequency = 0;

    int ME = A[0];   
     
    for(int i = 1 ; i < A.size() ; i++)
    {
        if(A.size() == 1)
        {
            return ME;
        }

        if(ME == A[i])
        {
            count++;
        }
        else
        {
             count--;
        }

        if(count==0)
        {
            ME = A[i];
            count = 1;
        }



    }
   
    for(int i = 0 ; i < A.size() ; i++)
    {
        if(ME == A[i])
        {
            frequency++;
        }
    }
    if((frequency+1) > A.size()/2)
    {
        return ME;
    }

    return 0;
}
