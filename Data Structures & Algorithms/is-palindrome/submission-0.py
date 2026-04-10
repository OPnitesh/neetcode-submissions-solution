
class Solution:
    def isPalindrome(self, s: str) -> bool:
        string=re.sub(r'[^a-zA-Z0-9]', '', s).lower()
        start=0
        end=len(string)-1
        while start<=end:
            if string[start]==string[end]:
                start+=1
                end-=1
            else:
                return False
            
        return True

        