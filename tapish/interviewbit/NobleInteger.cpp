//Problem link --> https://www.interviewbit.com/problems/noble-integer/
//Time O(nlogn), Space O(1)
//sort the vector, then iterate sorted vector, ignoring duplicates and count the numbers 
//ahead of the current number (they will be greater)
int solve(vector<int> &A) {
    int size = A.size();
    sort(A.begin(), A.end());
    
    //checking the last element, since for loop doesnt
    if (A[size-1] == 0) return 1;
    
    for (int i = 0; i < size-1; i++) {
      //Ignoring duplicates
        while (i < size-1 && A[i] == A[i+1]) {
            i++;
        }
        if (A[i] == size-1-i) return 1;
    }
    return -1;
}
