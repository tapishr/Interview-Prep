class Solution:
    # @param A : list of integers
    # @return an integer
    def solve(self, A):
        A = sorted(A)
        n = len(A)
        for i in range(len(A)):

            while(i< n-1 and A[i]==A[i+1]):
                i+=1
            if(A[i]==n-1-i):
                return 1
        return -1

# Question at : https://www.interviewbit.com/problems/noble-integer/
