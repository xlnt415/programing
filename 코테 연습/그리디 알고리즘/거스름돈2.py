money = int(input("거스름 돈 입력 : "))

coin_types = [5, 2]
count = 0

# 짝수 가능, 5단위 홀수 가능, 7가능, 9가능
# -1이 출력되는 경우 : 1, 3,
# 거슬러 줘야 할 돈이 동전의 가치보다 크면 동전을 하나 사용합니다.
# 거슬러 줘야 할 돈이 동전의 가치보다 작으면 동전을 사용하지 않습니다.

for coin in coin_types:
    if money % coin < 


    # count += money // coin
    # 나머지가 홀수일 경우
    # rest = money % coin
