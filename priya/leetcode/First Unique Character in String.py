class Solution(object):
    def firstUniqChar(self, s):

        indexlist = [s.find(c) for c in string.ascii_lowercase if s.count(c)==1]
        return min(indexlist) if len(indexlist)>0 else -1
        """
        :type s: str
        :rtype: int
        """

# Question at : https://leetcode.com/problems/first-unique-character-in-a-string/
# One more short hand solution return min([s.find(c) for c in string.ascii_lowercase if s.count(c)==1] or [-1])
