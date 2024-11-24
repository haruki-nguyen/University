A = float(input())
r = float(input())
n = float(input())

interest = A * ((1 + r/100) ** n )
print(f'%.2f'%interest)
