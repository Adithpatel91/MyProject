unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    long long int num = 0;


    for(int i = 31 ; i>=0 ; i--)
    {
        bool bit = ((A >> i) & 1);
        num = num + (bit * pow(2,31-i));
    }

return num;
}
