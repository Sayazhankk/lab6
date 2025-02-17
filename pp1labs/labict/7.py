
w = float(input("Enter your weight: "))
h = float(input("Enter your height: "))
bmi = w / (h ** 2)
print("BMI is:" ,bmi)
if bmi < 18.5:
    print( "Underweight")

elif 18.5 <= bmi < 24.9:
    print( "Normal weight")
elif 25 <= bmi < 29.9:
    print( "Overweight")
else:
    print( "Obesity")

