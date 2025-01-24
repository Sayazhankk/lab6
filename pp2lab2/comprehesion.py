#1st
fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = []

for x in fruits:
  if "a" in x:
    newlist.append(x)

print(newlist)
#2nd
fruits = ["apple", "banana", "cherry", "kiwi", "mango"]

newlist = [x for x in fruits if "a" in x]

print(newlist)
#3rd
newlist = [x for x in fruits if x != "apple"]
#4th
newlist = [x for x in fruits]

#5th 
newlist = [x for x in range(10)]
#6th
newlist = [x for x in range(10) if x < 5]
#7th
newlist = [x.upper() for x in fruits]
#8th
newlist = ['hello' for x in fruits]
#9th
newlist = [x if x != "banana" else "orange" for x in fruits]