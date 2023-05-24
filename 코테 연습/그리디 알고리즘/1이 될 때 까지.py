n, k = map(int,input("수 입력 : ").split())
count = 0


while n :
    if n % k != 0:
        n -= 1
        count += 1
        
    else:
        n //= k
        count += 1
        
print(count)