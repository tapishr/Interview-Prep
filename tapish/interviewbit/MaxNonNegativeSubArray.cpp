//Find out the maximum sub-array of non negative numbers from an array.
//The sub-array should be continuous. That is, a sub-array created by choosing the second and fourth element and skipping the third element is invalid.

//Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Sub-array A is greater than sub-array B if sum(A) > sum(B).

//Example:

//A : [1, 2, 5, -7, 2, 3]
//The two sub-arrays are [1, 2, 5] [2, 3].
//The answer is [1, 2, 5] as its sum is larger than [2, 3]
//NOTE: If there is a tie, then compare with segment's length and return segment which has maximum length
//NOTE 2: If there is still a tie, then return the segment with minimum starting index

vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int size = A.size();
    int strt_idx_max = -1, stop_idx_max = -2, strt_idx = -1, stop_idx = -1;
    long long int max = 0, sum = 0;
    for(int i = 0; i < size; i++) {
        long long int a = A[i];
        if (a >= 0){
            if (strt_idx == -1) {
                strt_idx = i;
            }
            sum += a;
            if (i == size-1) {
                if (sum > max) {
                    max = sum;
                    strt_idx_max = strt_idx;
                    stop_idx_max = i;
                }
                else if (sum == max) {
                    if (stop_idx_max - strt_idx_max < i - strt_idx) {
                        max = sum;
                        strt_idx_max = strt_idx;
                        stop_idx_max = i;
                    }
                }
            }
        }
        else {
            if (strt_idx != -1) {
                if (sum > max) {
                    max = sum;
                    strt_idx_max = strt_idx;
                    stop_idx_max = i-1;
                }
                else if (sum == max) {
                    if (stop_idx_max - strt_idx_max < i - 1 - strt_idx) {
                        max = sum;
                        strt_idx_max = strt_idx;
                        stop_idx_max = i-1;
                    }
                }
                sum = 0;
                strt_idx = -1;
            }
        }
    }
    vector<int> retvec;
    for (int i = strt_idx_max; i <= stop_idx_max; i++) {
        retvec.push_back(A[i]);
    }
    return retvec;
}
