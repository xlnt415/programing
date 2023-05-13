# 반복문 사용해보기
# 아이디어 : 2와 5로 거슬러주기, 거스름돈에만 영향을 받음

coin_types = [5, 2]
count = 0

money = int(input("거스름돈 : "))

for coin in coin_types:
    # -1이 출력되는 경우
    
    if money % coin_types[0] % 2 != 0:   # 이 부분 수정할 것.
        count += money // coin - 1 # 7일때 오류
        money %= coin + 5  
    
    elif 
    
    else:    
        count += money // coin
        money %= coin
    
print(count)

# 2305131226 30분 이내 실패
# 6입력 : 1출력 -> 해결
# 13입력 : 1출력 -> 미해결

