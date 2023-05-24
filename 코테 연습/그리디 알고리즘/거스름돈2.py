money = int(input("거스름 돈 입력 : "))

<<<<<<< HEAD
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
=======
# 10보다 작은 경우

coin_types = [5, 2]
count = 0


for coin in coin_types:
    # -1이 출력되는 경우 = 1, 3
    if money % [i for i in range(2, 10) != 0]:
         count += money // coin
         money %= coin
         # 소수일 경우 생각하기
         
        
        
    
    
    else:    
        count += money // coin
        money %= coin


    
print(count)
# 17을 넣어보니 틀림....(해결)
# 26을 넣어보니 틀림....
>>>>>>> 52988ff8b72d660e699fa7cbb059e1d5007abeca
