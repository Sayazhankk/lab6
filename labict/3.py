num=int(input('please enter a positive number: '))
while num<0:
 num=int(input('please enter a postitve number: '))
a, b = 0, 1
print(a, end=" ")

if num > 1:
   print(b, end=" ")

for _ in range(2, num):
 a, b = b, a + b
 print(b, end=" ")
