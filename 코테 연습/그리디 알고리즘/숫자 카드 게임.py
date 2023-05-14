n, m = map(int, input('행렬 입력 : ').split())
min_value = []

for i in range(n):
    ls = list(map(int, input('행의 숫자를 입력하세요:').split()))
    ls = sorted(ls)
    
    min_value.append(ls[0])


print(max(min_value))