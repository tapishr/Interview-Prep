def isPalindrome(self, x):
        if( x<0 or (x%10==0 and x!=0)):
            return False

        new = 0

        while(new<x):
            new = new*10 + x%10
            x /=10

        return x==new or x==new/10

# Question at : https://leetcode.com/problems/palindrome-number/#/description
