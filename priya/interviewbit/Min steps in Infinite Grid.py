class Solution:
    # @param X : list of integers
    # @param Y : list of integers
    # Points are represented by (X[i], Y[i])
    # @return an integer

    def coverPoints(self, X, Y):
        steps = 0

        if(len(X)<=1):
            return steps

        for i in range(0,len(X)-1):
            steps += max(abs(X[i]-X[i+1]), abs(Y[i]-Y[i+1]))

        return steps

# Question at : https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
