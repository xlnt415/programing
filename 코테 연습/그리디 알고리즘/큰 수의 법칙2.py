import time
import datetime

start_time = time.time()  # 측정 시작

# 프로그램 소스코드


# n, m, k를 공백으로 구분하여 입력받기
n, m, k = map(int, input().split())

# n개의 수를 공백으로 구분하여 입력받기
data = list(map(int, input().split()))


data = sorted(data, reverse=True)

# n개의 배열 중 m개의 숫자의 최대 합(한 숫자당 중복 가능 개수 : k개)

total = 0
count = 0

while count <= n + 1:  # n = 5
    total += data[0] * k
    count += k

    if count == k:
        total += data[1] * (k - 1)
        count += k - 1
    # total = 28

    total += data[0] * k
    count += k

    break

print(total)  # 2트 : 46 성공

end_time = time.time()  # 측정 종료

print(f"{end_time - start_time:.6f} sec")
