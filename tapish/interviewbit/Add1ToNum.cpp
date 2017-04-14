//https://www.interviewbit.com/problems/add-one-to-number/
//Check for 9s and handle them as special cases
vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int size = A.size();
    long long int i = size - 1;
    while (A[i] == 9 && i >= 0) {
        A[i] = 0;
        i--;
    }
    
    if (i < 0) {
        A.insert(A.begin(), 1);
    }
    else {
        A[i]++;
    }
    while (A[0] == 0) {
        A.erase(A.begin());
    }
    return A;
}
