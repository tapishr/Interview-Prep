def removeDuplicates(self, nums):
        n= len(nums)
        if(n==0 or n==1):
            return n

        i,j=0,1

        for j in range(1,n):
            if(nums[i]!=nums[j]):
                nums[i+1]=nums[j]
                i+=1
        return i+1

# Question at : https://leetcode.com/problems/remove-duplicates-from-sorted-array/#/description
