class Solution:
    def isPalindrome(self, s: str) -> bool:
        pattern = "[^0-9a-zA-Z]+"
        s = re.sub(pattern, "", s).lower()
        left, right = 0, len(s) - 1
        while left < right:
            if s[left] != s[right]:
                return False
            left += 1
            right -= 1
        return True