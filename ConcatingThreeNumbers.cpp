int Solution::solve(int A, int B, int C) {

    int MinNumber = min(min(A,B),C);
    int SecondMin = max(max(A,B),C);

    int Ans = 0;
    int numberleft;

    int r = 100;

    if(((MinNumber == A) && (SecondMin == B)) || ((MinNumber == B) && (SecondMin == A)))
    {
        numberleft = C;
    }
    else if(((MinNumber == C) && (SecondMin == A)) || ((MinNumber == A) && (SecondMin == C)))
    {
        numberleft = B;
    }
    else if(((MinNumber == C) && (SecondMin == B)) || ((MinNumber == B) && (SecondMin == C)))
    {
        numberleft = A;
    }


    Ans = Ans + (MinNumber * r) + numberleft;
    Ans = Ans * r + SecondMin;

    return Ans;

}
