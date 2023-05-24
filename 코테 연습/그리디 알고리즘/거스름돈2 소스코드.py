def main():
    n = int(input())

    ans = 0
    while n > 0:
        if n >= 5:
            n -= 5
            ans += 1
        else:
            n -= 2
            ans += 1

    if n < 0:
        ans = -1

    print(ans)
    
    
print(main(13))
print(main(14))
print(main(1))
print(main(3))
print(main(7))