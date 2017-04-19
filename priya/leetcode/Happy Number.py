def isHappy(self, n):
        visited = set()
        while n not in visited:
            visited.add(n)
            n = sum([int(x) **2 for x in str(n)])
        return n == 1

# Question at : https://leetcode.com/problems/happy-number/#/description
