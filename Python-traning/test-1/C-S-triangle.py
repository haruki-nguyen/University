x_1 = int(input())
x_2 = int(input())
x_3 = int(input())
y_1 = int(input())
y_2 = int(input())
y_3 = int(input())

AB = ((x_2 - x_1) ** 2 + (y_2 - y_1) ** 2) ** 0.5
BC = ((x_2 - x_3) ** 2 + (y_2 - y_3) ** 2) ** 0.5
CA = ((x_3 - x_1) ** 2 + (y_3 - y_1) ** 2) ** 0.5

C = AB + BC + CA
S = (x_1 * (y_2 - y_3) + x_2 * (y_3 - y_1) + x_3 * (y_1 - y_2)) / 2
absolute_S = S if S >= 0 else -S

print(f'%.2f'%C, f'%.2f'%absolute_S)
