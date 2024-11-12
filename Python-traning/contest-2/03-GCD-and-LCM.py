# Greatest common divider
x, y = map(int, input().split())
a = x
b = y

while x % y != 0:
    r = x % y
    x = y
    y = r

gcd = y

# Least common multiplier
lcm = abs(a * b) // gcd

print(gcd, end = " ")
print(lcm, end = " ") 
