#1st
x = "awesome"

def myfunc():
  print("Python is " + x)

myfunc()
#2nd
x = "awesome"

def myfunc():
  x = "fantastic"
  print("Python is " + x)

myfunc()

print("Python is " + x)
#3rd
def myfunc():
  global x
  x = "fantastic"

myfunc()

print("Python is " + x)
#4th
x = "awesome"

def myfunc():
  global x
  x = "fantastic"

myfunc()

print("Python is " + x)