numbers = list(range(1, 51))
filter = []
for num in numbers:
    if num % 3 == 0 and num % 5 == 0:
        filter.append(num)
print(filter)
