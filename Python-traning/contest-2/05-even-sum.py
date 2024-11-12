a = int(input())
b = int(input())
sum = 0

for i in range (a if a % 2 == 0 else a + 1, b + 1, 2):
    sum += i

print(sum)
