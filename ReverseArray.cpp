vector<int> Solution::solve(const vector<int> &A) {

int size = A.size();
vector<int> Arr;

int input;

for(int i = size-1 ; i >= 0 ; i--)
{
    Arr.push_back(A[i]);
}

return Arr;

}

