int Solution::findMod(string A, int B) {

    long int Val = 0;
    long int r = 1;

    for(int i = A.length()-1 ; i >=0 ; i--)
    {
        int element = A[i] - 48;
        Val = Val + (element % B * r);
        r = (r * 10) % B;

   }
   if(Val < 0)
    {
        Val = (Val % B) + B;
    }
    else
    {
        Val = Val % B;
    }

    return (Val);
}
