def sum(n):
    if n==0:
        return 0
    if n==1:
        return 1
    return n+sum(n-1)
n=5
print(sum(n))