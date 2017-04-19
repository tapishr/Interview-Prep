//https://www.interviewbit.com/problems/number-of-1-bits/
//Shift left 1 by 1 position and AND it with given number, counting non zero ANDs
int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int n = 1;
    unsigned int count = 0;
    for (int i = 0; i < 32; i++) {
        unsigned int res = A & n;
        if (res != 0) {
            count++;
        }
        n = n<<1;
    }
    return count;
}
