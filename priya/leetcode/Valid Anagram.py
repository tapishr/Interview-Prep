class Solution(object):
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False

        for c in string.ascii_lowercase:
            if(s.count(c) != t.count(c)):
                return False
        return True
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
# Question at : https://leetcode.com/problems/valid-anagram/#/description
