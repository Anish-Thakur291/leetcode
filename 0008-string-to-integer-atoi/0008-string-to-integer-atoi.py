class Solution:
    def myAtoi(self, s: str) -> int:
        s=s.strip()
        if not s:
            return 0
        sign=1
        ind=0
        res=0
        if(s[ind]=='-'):
            sign=-1
            ind+=1
        elif(s[ind]=='+'):
            sign =1 
            ind+=1   
        while ind<len(s) and s[ind].isdigit():
            res=res*10+int(s[ind])
            ind+=1
        res*= sign
        INT_MAX=2**31-1
        INT_MIN=-2**31
        if(res<INT_MIN):
            return INT_MIN
        elif(res>INT_MAX):
            return INT_MAX    
        return res   
        