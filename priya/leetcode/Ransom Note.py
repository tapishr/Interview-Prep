class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        return not collections.Counter(ransomNote) - collections.Counter(magazine)
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
# Question at : https://leetcode.com/problems/ransom-note/#/description
