"""
Arithmetic progression formula: a_n = a_1 + ((n - 1) * d)
a = -1
d = 3

S = -1 + 2 + 5 + 8 + ... + (-1 + (n - 1) * 3)
S = (-1 + (n - 1) * 3) + (-1 + (n - 2) * 3) + ... + -1
2S = n * (-5 + 3 * n) => S = (n * (-5 + 3 * n)) // 2
"""

n = int(input())
sum = (n * (-5 + 3 * n)) // 2

print(sum) 
