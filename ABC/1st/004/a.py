import math
import itertools

N = int(input())
points = []

for i in range(N):
    xi, yi = input().split()
    points.append((int(xi),  int(yi)))

max = 0

for v in itertools.combinations(points, 2):
    d = math.sqrt((v[0][0] - v[1][0])**2 + (v[0][1] - v[1][1])**2)
    if max < d:
        max = d

print(max)
