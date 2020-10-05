#https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if(len(nums)==0):
            return 0
        flag1=nums[0]
        flag2=1
        for i in range(1,len(nums)):
            if(nums[i]!=flag1):
                flag1=nums[i]
                nums[flag2]=flag1
                flag2+=1
        return flag2
