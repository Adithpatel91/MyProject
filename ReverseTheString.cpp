void ReverseTheString (string &A ,int start ,int end)
{
    for(; start <= end ; start++, end--)
    {
        swap(A[start],A[end]);
    }
}
void print(std::string input);
string Solution::solve(string A) {
    int n = A.length();
    reverse(A.begin(),A.end());
    int st = 0;
    string result = "";


    for(int i = st; i < n; i++) {
        if(A[i] == ' ') {
            continue;
        } else {
            int j = i;
            string word = "";
            while(j < n and A[j] != ' ') {
                word += A[j];
                j++;
            }
            ReverseTheString(word, 0, word.length() - 1);
            result += " " + word;
            i = j;
        }
    }
    return result.substr(1);
}
