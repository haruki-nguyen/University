# Q3
n = int(input("Nhap n: "))
for i in range(1, n + 1, 1):
    if n % i == 0:
        print(i, end = " ")
