int Solution::LCM(int A, int B) {

    int hcf = __gcd(A,B);

    int LCM = (A*B)/hcf;

    return LCM;
}
