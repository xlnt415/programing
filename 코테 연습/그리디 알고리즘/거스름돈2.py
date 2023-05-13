money = int(input("거스름 돈 입력 : "))

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
