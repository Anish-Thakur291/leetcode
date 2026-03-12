class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        stack=[]
        freq={}
        for i in range(len(nums2)-1,-1,-1):
            while stack and stack[-1]<=nums2[i]:
                stack.pop()
            if not stack:
                freq[nums2[i]]=-1
            else:
                freq[nums2[i]]=stack[-1]
            stack.append(nums2[i])
        return [freq[num] for num in nums1]
            
        
        