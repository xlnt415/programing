n, k = map(int, input('개수와 최대 무게 입력 : ').split())

total_w = 0

# 입력 횟수 : 최대 n번
# 딕셔너리 공부 더 해보기

w, v = list(map(int, input('물건의 무게와 가치를 입력 : ').split()))

dict_sum = sorted(zip(w, v), reverse=True)


for i in dict_sum:
    if i.values() <= k:
        total_w +=
