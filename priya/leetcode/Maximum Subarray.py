class Solution(object):
    def maxSubArray(self, nums):
        maxsum = nums[0]
        tempsum = nums[0]
        for i in range(1,len(nums)):
            if(tempsum<0):
                tempsum = nums[i]
            else:
                tempsum +=nums[i]
            
            maxsum = max(tempsum,maxsum)
            #tempsum = max(tempsum + nums[i], nums[i])
            #maxsum = max(tempsum,maxsum)
        return maxsum                           #sum(nums[l:r])        
        
        """
        :type nums: List[int]
        :rtype: int
        """
# Question at : https://leetcode.com/problems/maximum-subarray/#/description
