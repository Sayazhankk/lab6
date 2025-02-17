def vowel(str):
    if len(str)==0:
        return 0
    cnt=0
    return    (for i in range(len(str)): if str[i]=='a,e,i,o,u,A,E,I,O,U': cnt+=1)
    

str=aelo
print(vowel(str))