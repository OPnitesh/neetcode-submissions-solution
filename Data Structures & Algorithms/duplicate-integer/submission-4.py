class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        cnt={}
        for x in nums:
            if x in cnt:
                return True
            cnt[x]=-1
        return False 


