## Input and output
# a = input("Enter a: ")
# print("a is: ", a)
# print("Print with plus >> a is: " + a)
# print(f"Print with f >> a is:  {a}")
# print("Print with format function >> a is: {}".format(a))

## Variables
# name = "Haruki"

## Data types
# def greet():
#     print("Hello")

# print(greet())

# integer = 10
# f = 10.1
# str1 = "Alpha"
# com = 10+3j
# boolean = False
  
# print(type(integer))
# print(type(f))
# print(type(str1))
# print(type(com))
# print(type(boolean))

## Operators
# a = 7.4
# b = 2
# x = a // b 
# x %= 2
# print(x)
# print(1256 % 4)

## Logical operators
# age = 21
# is_student = False
# result = (age <= 18) and (not is_student)
# print(result)
# print(5 ^ 3)

## If ... else statement

a = int(input("Enter a: "))
# if a > 20:
#     print("a is greater than 20")
# elif a == 20:
#     print("a is equal to 20")
# else:
#     print("a is less than 20")

# Cau 1
if (a % 2) == 0:
    print("so chan")
else:
    print("so le")

b = int(input("Enter b: "))
c = int(input("Enter c: "))

# Cau 2
if ((a + b) > c) and ((a + c) > b) and ((b + c) > a):
    print("Day la tam giac")
else:
    print("Khong la tam giac")
