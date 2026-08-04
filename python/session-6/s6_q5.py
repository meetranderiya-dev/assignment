row = 4
i = 1


while i <= row:
    space = row - i
    while space > 0:
        print(" ",end="")
        space -=1
    stars = 2 * i - 1
    while stars > 0:
        print("*",end="")
        stars -=1
    print()
    i += 1