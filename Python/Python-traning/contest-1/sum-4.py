"""
Geometric sequence formula: a * r + a * (r ** 2) + a * (r ** 3) + ... + a * (r ** n)
S_n = (a_1(1 - r^n))/(1 - r)
a = 8
r = 3
"""

n = int(input())
a_1 = 8
r = 3
sum = (a_1 * (1 - r ** n)) // (1 - r)

print(sum)
