int Solution::solve(string A) {

int length = A.length();
string vowel = "aeiouAEIOU";
int count = 0;

for(int idx = 0 ; idx < A.length() ; idx++)
{
    if((A[idx] == 'A') || (A[idx] == 'E') || (A[idx] == 'I') || (A[idx] == 'O') || (A[idx] == 'U') || (A[idx] == 'a') || (A[idx] == 'e') || (A[idx] == 'i') || (A[idx] == 'o') || (A[idx] == 'u'))
    {
       count += length - idx;
    }


}
return (count % 10003);
}
