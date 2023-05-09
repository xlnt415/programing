n, k = map(int, input().split())
w, v = [], []
for i in range(n):
    a, b = map(int, input().split())
    w.append(a)
    v.append(b)

# 입력 횟수 : 최대 n번
# 딕셔너리 공부 더 해보기

ls = []

for i in range(n - 1):
    a = w[i] + w[i + 1]
    if a <= k:

        b = v[w.index(w[i])] + v[w.index(w[i + 1])]
        ls.append(b)


if len(ls) != 0:
    print(max(ls))
else:
    print(0)
