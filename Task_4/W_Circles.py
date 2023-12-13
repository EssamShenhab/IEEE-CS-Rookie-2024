def distance(x1, y1, x2, y2):
    return ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5

def circles_intersect(x1, y1, x2, y2, x3, y3, x4, y4):
    center1 = ((x1 + x2) / 2, (y1 + y2) / 2)
    center2 = ((x3 + x4) / 2, (y3 + y4) / 2)

    radius1 = distance(x1, y1, x2, y2) / 2
    radius2 = distance(x3, y3, x4, y4) / 2

    distance_between_centers = distance(center1[0], center1[1], center2[0], center2[1])

    return distance_between_centers <= radius1 + radius2

# Input
x1, y1, x2, y2 = map(int, input().split())
x3, y3, x4, y4 = map(int, input().split())

# Output
result = "YES" if circles_intersect(x1, y1, x2, y2, x3, y3, x4, y4) else "NO"
print(result)
