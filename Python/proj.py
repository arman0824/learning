MAX_LINES = 3


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

def get_lines():
    while True:
            lines = input("Enter the number of lines to bet on (1-"+ str(MAX_LINES) + "): " )
            if lines.isdigit():
                lines = int(lines)
                if lines > MAX_LINES or lines < 1:
                    print("Enter a valid number of lines")
                else:
                    break
                    
    return lines 



balance = deposit()
lines = get_lines()

print(balance, lines)