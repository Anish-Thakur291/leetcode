class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        c_map={}
        l=0
        max_len=0
        for r in range(len(fruits)):
            c_map[fruits[r]]=c_map.get(fruits[r],0)+1
            while len(c_map)>2:
                c_map[fruits[l]]-=1
                if c_map[fruits[l]]==0:
                    del c_map[fruits[l]]
                l+=1
            max_len=max(max_len,r-l+1)

        return max_len
        