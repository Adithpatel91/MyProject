vector<int> Solution::solve(vector<int> &A) {

    vector<int> ResultantArr;

    int Multiplication = 1;

    int Divisor;

    for(int i = 0 ; i < A.size() ; i++)
    {
        Multiplication = Multiplication * A[i];
    }

  //  cout<<Multiplication<<endl;
  for(int i = 0 ; i < A.size() ; i++)
  {
      Divisor = Multiplication / A[i];
      ResultantArr.push_back(Divisor);
  }

  return ResultantArr;
    
}
