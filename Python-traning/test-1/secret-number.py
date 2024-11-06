import math

# Document to find n and k: "./secret-number-doc.md"

sample_x1 = 2
sample_x2 = 3
sample_y1 = 13
sample_y2 = 37

a = int(input())

n = (math.log(sample_y1/sample_y2))/(math.log(sample_x1/sample_x2))
k = (sample_y1 / (sample_x1 ** n))

y = k * (a ** n)

print(round(y))
