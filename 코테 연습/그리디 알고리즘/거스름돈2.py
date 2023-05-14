money = int(input("거스름 돈 입력 : "))

coin_types = [5, 2]
count = 0

for coin in coin_types:
    count += money // coin
    # 나머지가 홀수일 경우
    rest = money % coin
