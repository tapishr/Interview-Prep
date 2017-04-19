def lengthOfLastWord(self, s):
        new = s.strip().split()
        if(len(new)==0):
            return 0
        return len(new[-1])

# Question at : https://www.interviewbit.com/problems/length-of-last-word/
