class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        st = set()
        ans = 0
        currSum = 0
        x = 1
        m = len(banned)
        for i in range(m):
            st.add(banned[i])
        while x <= n and currSum <= maxSum:
            if x not in st:
                currSum += x
                ans +=1
            x+=1
        if(currSum > maxSum):
            ans-= 1
        return ans
        