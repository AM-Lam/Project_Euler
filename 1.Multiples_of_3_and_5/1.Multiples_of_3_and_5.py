import sys

def Tn(n):
    return (n * (n + 1)) // 2

print("Please type the range:")
n = int(input().strip())
N = n - 1
nSum = 3 * Tn(N // 3) + 5 * Tn(N // 5) - 15 * Tn(N // 15)
print(nSum)
