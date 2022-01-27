int Solution::bulbs(vector<int> &A) {

    int SwitchPress = 0;
    int CurrentState = 0; 

    for(int i = 0 ; i < A.size() ; i++)
    {
        if(SwitchPress % 2 == 0)
        {
            CurrentState = A[i];
        }
        else
        {
            CurrentState = 1 - A[i];
        }
        if(CurrentState == 0)
        {
            SwitchPress++;
        }
    }

    return SwitchPress;
    
}
