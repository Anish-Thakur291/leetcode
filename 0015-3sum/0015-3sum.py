# class Solution:
#     def threeSum(self, nums: List[int]) -> List[List[int]]:
#         nums.sort()
#         res=[]
#         n=len(nums)
#         for i in range(n-2):
#             if i>0 and nums[i]==nums[i-1]:
#                 continue
#             l=i+1
#             r=n-1
#             while l<r:
#                 total=nums[i]+nums[l]+nums[r]
#                 if(total>0):
#                     r=r-1
#                 elif(total<0):
#                     l=l+1
#                 else:
#                     res.append([nums[i],nums[l],nums[r]])
#                 while l<r and nums[l]==nums[l+1]:
#                     l=l+1    
#                 while l<r and nums[r]==nums[r-1]:
#                     r=r-1

#                 l=l+1
#                 r=r-1   

#         return res

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()  # Sort the array to use two-pointer approach
        res = []      # This will store the final list of triplets
        n = len(nums) # Get the length of the list

        for i in range(n-2):  # Fix the first element
            if i > 0 and nums[i] == nums[i-1]:
                continue  # Skip duplicates for the first element
            
            l = i + 1  # Left pointer
            r = n - 1  # Right pointer

            while l < r:
                total = nums[i] + nums[l] + nums[r]  # Calculate the sum
                
                if total > 0:
                    r -= 1  # If sum is too large, move the right pointer left
                elif total < 0:
                    l += 1  # If sum is too small, move the left pointer right
                else:
                    # If sum is exactly 0, we found a valid triplet
                    res.append([nums[i], nums[l], nums[r]])
                    
                    # Skip duplicates for the left pointer
                    while l < r and nums[l] == nums[l + 1]:
                        l += 1
                    # Skip duplicates for the right pointer
                    while l < r and nums[r] == nums[r - 1]:
                        r -= 1
                    
                    # Move both pointers after finding a valid triplet
                    l += 1
                    r -= 1
                    
        return res
