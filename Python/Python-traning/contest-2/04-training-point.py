n = int(input())
points = [tuple(map(int, input().split())) for _ in range(n)] 


for point in points:
    total_point = point[0] + point[1]
    if total_point < 30:
        print("Kém")
    elif total_point < 50:
        print("Yếu")
    elif total_point < 65:
        print("Trung bình")
    elif total_point < 80:
        print("Khá")
    elif total_point < 100:
        print("Giỏi")
    else:
        print("Error")
