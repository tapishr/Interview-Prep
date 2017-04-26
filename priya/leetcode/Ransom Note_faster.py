class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        for eachChar in set(ransomNote):
            if magazine.count(eachChar) < ransomNote.count(eachChar):
                return False
        return True
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        
