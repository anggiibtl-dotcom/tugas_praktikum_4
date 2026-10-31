batas = int(input())
for i in range(1, batas + 1):
    if i % 2 != 0:
        print(i, end=" ")
print()
for i in range(batas, 0, -1):
    if i % 2 == 0:
        print(i, end=" ")
print()