a1, a2 = map(int, input().split())

i, j = a1, a2

if a1 < a2:
    while i <= a2 and j >= a1:
        print(f"{i} {j}", end="")
        if i < a2:
            print(" - ", end="")
        i += 1
        j -= 1
else:
    while i >= a2 and j <= a1:
        print(f"{i} {j}", end="")
        if i > a2: 
            print(" - ", end="")
        i -= 1
        j += 1
print()