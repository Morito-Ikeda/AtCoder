H, W = map(int, input().split())
S = [input() for i in range(H)]

dxy = [(-1, 1), (0, 1), (1, 1), (-1, 0), (1, 0), (-1, -1), (0, -1), (1, -1)]

ans = []

for row in S:
    ans.append(list(row))

for y in range(H):
    for x in range(W):
        if S[y][x] == "#": continue
        count = 0
        for dx, dy in dxy:
            if x+dx < 0 or x+dx >= W or y+dy < 0 or y+dy >= H: continue
            if S[y+dy][x+dx] == "#":
                count += 1
        ans[y][x] = str(count)

for y in range(H):
    print(''.join(ans[y]))
