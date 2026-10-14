def deposit():
    while True:
        amount = input("Enter the amount you would like to deposit: $")
        if amount.isdigit():
            amount = int(amount)
            if amount > 0:
                break
            else:
                print("Amount must be greater than zero.")
    return amount 

deposit()