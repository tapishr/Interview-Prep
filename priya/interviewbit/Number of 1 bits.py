class Solution:
    # @param A : integer
    # @return an integer
    def numSetBits(self, A):
        count = 0
        while(A!=0):
            if(A&1):
                count+=1
            A = A>>1
        return count

# Question at : https://www.interviewbit.com/problems/number-of-1-bits/
