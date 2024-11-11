# Greatest common divider
a = int(input())
b = int(input())

while a % b != 0:
    r = a % b
    a = b
    b = r

GCD = b

# Least common multiplier
LCM = int(abs(a * b)/GCD)

print(GCD, LCM) 
