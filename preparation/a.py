def rev(str):
    if len(str)==0:
     return str
    return rev(str[1:])+str[0]
str="aplle"
print(rev(str))
