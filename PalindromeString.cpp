void print(std::string input)
{
    cout << input << endl;
} 

int Solution::isPalindrome(string A) {

    int start = 0;
    string MyStr = "";
    

    for(int i = start ; i < A.length() ; i++)
    {
        if(((A[i] >= 'A') && (A[i] <= 'Z')) || ((A[i] >= 'a') && (A[i] <= 'z')) || (A[i] >= '0') && (A[i] <= '9'))
        {
            MyStr += A[i];
        }
    }

    int end = MyStr.length() - 1;
    int flag = 0;
    
    for(int i = 0 , j = end ; i < j ; i++ ,j--)
    {
        if((MyStr[i] == MyStr[j]) || (MyStr[i] == (MyStr[j]^32)))
        {
            /* Do  Nothing */
        }
        else
        {
            flag = 1;
            return 0;
        }
    }

    if(flag==0)
    {
        return 1;
    }
}
