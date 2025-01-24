#1st
thislist = ["apple", "banana", "cherry"]
thislist.remove("banana")
print(thislist)
#2nd
thislist = ["apple", "banana", "cherry", "banana", "kiwi"]
thislist.remove("banana")
print(thislist)
#3rd
thislist = ["apple", "banana", "cherry"]
thislist.pop(1)
print(thislist)
#4th
thislist = ["apple", "banana", "cherry"]
thislist.pop()
print(thislist)
#5th 
thislist = ["apple", "banana", "cherry"]
del thislist[0]
print(thislist)
#6th
thislist = ["apple", "banana", "cherry"]
del thislist
#7th
thislist = ["apple", "banana", "cherry"]
thislist.clear()
print(thislist)
