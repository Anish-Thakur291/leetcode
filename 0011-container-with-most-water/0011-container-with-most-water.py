class Solution:
    def maxArea(self, height: List[int]) -> int:
        l=0
        r=len(height)-1
        max_stored_water=0
        while l<r:
            bar= min(height[l],height[r])
            water=r-l
            area=bar*water
            max_stored_water=max(max_stored_water,area)
            if height[l]<=height[r]:
                l+=1
            else:
                r-=1
        return max_stored_water

        