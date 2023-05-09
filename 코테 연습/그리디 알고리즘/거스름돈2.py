money = int(input("거스름 돈 입력 : "))

# 10보다 작은 경우
if money < 10:
    if money < 5:
        if money % 2 == 0:
            print(money // 2)

        else:
            print(-1)

    else:
        if money % 5 == 0:
            print(1)

        elif money % 2 == 0:
            print(money // 2)

        else:
            print(1 + ((money - 5) // 2))


# 10보다 큰 경우
elif money % 5 == 0 or money % 2 == 0:
    m_5, m_2 = money // 5, money % 5 // 2

    print(m_5 + m_2)

else:
    m_5, m_2 = (money // 5) - 1, (money % 5 + 5) // 2

    print(m_5 + m_2)

# 17을 넣어보니 틀림....
