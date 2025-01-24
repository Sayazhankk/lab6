todo = []

while True:
    print("\nMenu of actions:")
    print("1. Add a new to-do item")
    print("2. View all to-do items")
    print("3. Remove a to-do item by its number")
    print("4. Exit by entering q")
    
    choice = input("Choose an action 1-4: ")
    
    if choice == '1':
        item = input("What item do you want to add? ")
        todo.append(item)
        print("Successfully added!")
    
    elif choice == '2':
        print(todo)
    
    elif choice == '3':
        num = int(input("Enter the number of the item you want to remove: "))
        todo.pop(num - 1)
        print("Successfully removed!")
    
    elif choice == '4':
            print("Goodbye!")
            break
    
    else:
        print("Error! Please choose 1-4")
