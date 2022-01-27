vector<int> Solution::solve(const vector<int> &A, int B) {

    vector<int> OutArr;


    for(int i = 0 ; i < A.size(); i++)
    {
        OutArr.push_back(A[i] + B);
    }

    return OutArr;


}
