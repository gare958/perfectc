n = int(input())
D = {}
for _ in range(n):
    word = input()
    if word not in D:
        D[word] = 1
    else:
        D[word] += 1
print(D.items())

print(sorted(D.items(), key = lambda x: (-x[1]))[0])