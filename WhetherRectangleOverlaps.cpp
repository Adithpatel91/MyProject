int Solution::solve(int A, int B, int C, int D, int E, int F, int G, int H) {

    if((A >= G) || (E >= C)) 
    {
        return 0;
    }
    else if((D <= F) || (H <= B))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}