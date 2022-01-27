void print(std::string input)
{
    cout << input << endl;
}

int Solution::lengthOfLastWord(const string A) {

    int ans = 1;
    int end = A.length()-1;
    int count = 0;
    int countspaces = 0;

    string MyStr = A;
    if(A.length() == 1)
    {
        return 1;
    }

   int j = end;

    while((j >= 0) && (MyStr[j] == ' '))
    {
        j--;
    }

    for(int i = j ; i >= 0 ; i--)
    {

        if(MyStr[i] == ' ')
        {
            break;
        }
        else
        {
            count++;
        }
    }

    return count;
}
