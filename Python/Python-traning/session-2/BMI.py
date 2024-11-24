height = float(input("Chieu cao la: "))
weight = float(input("Can nang la: "))

BMI = weight / (height * height)

print(f'BMI la: %.2f'%BMI)

if BMI < 18.5:
    print("Thieu can")
elif BMI < 24.9:
    print("Can doi")
elif BMI < 29.9:
    print("Thua can")
elif BMI < 34.9:
    print("Beo phi")
else:
    print("Beo phi nguy hiem")
