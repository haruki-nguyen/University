# n = int(input("Nhap n: "))
n = 123456789
len_n = len(str(n))
i = 0
sum = 0

while i < len_n:
    i += 1
    sum += i

print(i, sum)
