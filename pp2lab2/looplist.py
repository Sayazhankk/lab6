#1st
thislist = ["apple", "banana", "cherry"]
for x in thislist:
  print(x)
#2nd
thislist = ["apple", "banana", "cherry"]
for i in range(len(thislist)):
  print(thislist[i])
#3rd
thislist = ["apple", "banana", "cherry"]
i = 0
while i < len(thislist):
  print(thislist[i])
  i = i + 1
#4th
thislist = ["apple", "banana", "cherry"]
[print(x) for x in thislist]