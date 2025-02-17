while True:
    print("\nMenu:")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Exit")

    choice = input("Choose an option 1-4: ")

    if choice == '1':
        num1 = int(input("Enter the first number: "))
        num2 = int(input("Enter the second number: "))
        print(f"Result: " ,num1 + num2)

    elif choice == '2':
        num1 = int(input("Enter the first number: "))
        num2 = int(input("Enter the second number: "))
        print("Result: " ,num1 - num2)

    elif choice == '3':
        num1 = int(input("Enter the first number: "))
        num2 = int(input("Enter the second number: "))
        print(f"Result: ",num1 * num2)

    elif choice == '4':
        print("Goodbye!")
        break

    else:
        print("Error! Please choose 1-4")
