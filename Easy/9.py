class Solution:
    def isPalindrome(self, x: int) -> bool:
        sign = -1 if x < 0 else 1   
        # ternary equivalent to cpp

        revNum = int( str(abs(x))[::-1] )
        # take abs of x, convert to string to slice and reverse, type back to int
        return True if revNum == x else False

# class Solution:
#    def isPalindrome(self, x: int) -> bool:
#        s = str(x)
#        return s == s[::-1]
# also works