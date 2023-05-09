import time

star = time.time()

a = int(input('숫자를 입력하세요 : '))

a = str(a)

total = int(a[0])

# 첫 항은 무조건 더함


for i in a[1:]:
    i = int(i)
    if i <= 1:
        total += i

    else:
        total *= i

print(total)

end = time.time()

print(f"time : {end - star}")
