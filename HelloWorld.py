x = 100000 
listName = [[2]]

for i in range(3, x + 1):
    num = []
    k = i
    j = 2
    while k > 1:
        if k % j == 0:
            num.append(j)
            k /= j
            if j > x:
                num.append(i)
                break
        else:
            j = j + 1
    listName.append(num)

for i in range(len(listName)):
    k = i + 2
    print(k, end = '')
    print(" = ", end = '')
    for j in range(len(listName[i])):
        print(listName[i][j], end = '')
        print(" ", end = '')
    print("\n")
