import math as m

# S = \sum\lim_{n = 0}^{\infty} \frac{x^n}{n!}
# This is the Taylor series expansion of the function e^x


x = input()
n = input()
sum = 0

for i in range(n):
    # sum += (x ** i) / m.factorial(n)
    print(i)

# print(f'.2f'%sum)
