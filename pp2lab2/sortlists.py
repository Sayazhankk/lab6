#1st
thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort()
print(thislist)
#2nd
thislist = [100, 50, 65, 82, 23]
thislist.sort()
print(thislist)
#3rd
thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort(reverse = True)
print(thislist)
#4th
thislist = [100, 50, 65, 82, 23]
thislist.sort(reverse = True)
print(thislist)
#5th 
def myfunc(n):
  return abs(n - 50)

thislist = [100, 50, 65, 82, 23]
thislist.sort(key = myfunc)
print(thislist)
#6th
thislist = ["banana", "Orange", "Kiwi", "cherry"]
thislist.sort()
print(thislist)
#7th
thislist = ["banana", "Orange", "Kiwi", "cherry"]
thislist.sort(key = str.lower)
print(thislist)
#8th
thislist = ["banana", "Orange", "Kiwi", "cherry"]
thislist.reverse()
print(thislist)