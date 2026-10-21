MAX_LINES = 3
MAX_BET = 100
MIN_BET = 10

def deposit():
    while True:
        amount = input("Enter the amount you would like to deposit: $")
        if amount.isdigit():
            amount = int(amount)
            if amount > 0:
                break
            else:
                print("Amount must be greater than zero.")
        else:
             print("Enter a valid amount")
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
        else:
                print("Enter a valid digit")
    return lines 

def get_bet(amount):
    while True:
            bet = input("Enter how much you'd like to bet: $")
            if bet.isdigit():
                bet = int(bet)
                if bet > amount:
                     print(f"You're low on balance, Current balance ${amount}")
                elif bet > MAX_BET or bet < MIN_BET:
                    print(f"Bet amount must be between ${MIN_BET} - ${MAX_BET}.")
                else:
                    break
            else:
                 print("Enter a valid bet")
    return bet

def update_balance(amount, bet):
     amount = amount - bet
     return amount
     


def main():
    balance = deposit()
    lines = get_lines()
    bet = get_bet(balance)
    updated_balance = update_balance(balance, bet)
    print(balance, lines, bet, updated_balance)

main()