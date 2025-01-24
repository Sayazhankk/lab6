import random as r

number= r.randint(1, 100) 

while True:
    guess = input("Enter your number ot 'q' to quit : ")
    
    if guess == 'q':
        print("Exit")
        break
    if guess.isdigit():
        guess = int(guess)
    else:
        print("Enter a number :")
       
    
    if guess < number:
        print("Too low!")
    elif guess > number:
        print("Too high!")
    else:
        print("Congratulations!")
        break
