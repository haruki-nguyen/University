# n = int(input("Nhap N": ))
n = 123456789
len_n = len(str(n))
reversed_n = 0
i = 0

while n > 0:
    reversed_n = reversed_n * 10 + n % 10
    n = n // 10
    print(reversed_n, n)
    
    i += 1
