class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        stack=[]
        
        res=[0]*len(nums)
        for i in range(2*len(nums)-1,-1,-1):
            while stack and stack[-1]<=nums[i%len(nums)]:
                stack.pop()
            if i<len(nums):
                if not stack:
                    res[i]= -1
                else:
                    res[i]=stack[-1]
            stack.append(nums[i%len(nums)])



        return res

            


        