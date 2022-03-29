class Solution:
    def maxNumOfSubstrings(self, s):
        fst = {c: i for i, c in reversed(list(enumerate(s)))}
        lst = {c: i for i, c in enumerate(s)}

        intervals = []
        for c in set(s):
            b, e = fst[c], lst[c]
            i = b
            while i <= e and b == fst[c]:
                b = min(b, fst[s[i]])
                e = max(e, lst[s[i]])
                i += 1
            if b == fst[c]:
                intervals.append((e, b))

        intervals.sort()
        ans, prev = [], -1
        for e, b in intervals:
            if b > prev:
                ans.append(s[b:e + 1])
                prev = e

        return ans
