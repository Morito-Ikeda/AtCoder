S = input()

for i in range(1 << len(S)-1):
    f = ''
    for j in range(len(S)-1):
        f += S[j]
        if (i >> j) & 1:
            f += '+'
        else:
            f += '-'
    f += S[-1]
    if eval(f) == 7:
        ans = f + '=7'
        print(ans)
        break
