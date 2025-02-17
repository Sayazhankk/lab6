temp = float(input("Enter the temperature value: "))
conv = input("Enter C for Celsius to Fahrenheit, F for Fahrenheit to Celsius :")
if conv == 'C' :
    faren = (temp * 9/5) + 32
    print(faren)
elif conv == 'F':
    cels = (temp - 32) * 5/9
    print(cels)
else:
    print("error")
