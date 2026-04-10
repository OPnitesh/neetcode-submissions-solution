class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ls=[]
        n=len(nums)
        sum=0
        for i in range(n):
            for j in range (i+1,n):
                for k in range(j+1,n):
                    if nums[i]+nums[j]+nums[k]==0:
                        ans=sorted([nums[i],nums[j],nums[k]])
                        if ans not in ls:
                            print(ans)
                            ls.append(ans)
        return ls
                            