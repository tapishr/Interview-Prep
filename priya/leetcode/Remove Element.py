def removeElement(self, nums, val):
        n = len(nums)

        for i in range(n):
            while(i<n and nums[i]==val):
                nums[i] = nums[n-1]
                n-=1
        return n

# Question at : https://leetcode.com/problems/remove-element/#/description
