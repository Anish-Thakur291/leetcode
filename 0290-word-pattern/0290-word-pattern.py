class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()
        if len(pattern) != len(words):
            return False

        mappt, maptp = {}, {}

        for c1, c2 in zip(pattern, words):
            if c1 in mappt and mappt[c1] != c2:
                return False
            if c2 in maptp and maptp[c2] != c1:
                return False
            mappt[c1] = c2
            maptp[c2] = c1

        return True

        