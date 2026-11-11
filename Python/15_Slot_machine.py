import random

MAX_LINES = 3
MAX_BET = 100
MIN_BET = 10


ROWS = 3
COLS = 3

symbol_count = {
    "A": 2,
    "B": 4,
    "C": 6,
    "D": 8,
}

def get_slot_machine_spin(rows, cols, symbols):
    all_symbols = []
    for symbol, symbol_count in symbols.items():
        for _ in range(symbol_count):
            all_symbols.append(symbol)

    columns = []
    for _ in range(cols):
        column = []
        current_symbols = all_symbols[:]
        for _ in range(rows):
            value = random.choice(current_symbols)
            current_symbols.remove(value)
            column.append(value)

        columns.append(column)

    return columns

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

def print_slot_machine(columns):
    for row in range(len(columns[0])):
        for i, column in enumerate(columns):
            if i != len(columns) - 1:
                print(column[row], end=" | ")
            else:
                print(column[row])
     


def main():
    balance = deposit()
    lines = get_lines()
    while True:
        bet = get_bet(balance)
        total_bet = bet * lines

        if total_bet > balance:
            print(f"You do not have enough balance.\nYour current balance is ${balance}")
        else:
            balance -= total_bet
            break
    print(f"You are betting ${bet} on {lines} lines. Total bet is ${total_bet}\nYour current balance is ${balance}")

    slots = get_slot_machine_spin(ROWS, COLS, symbol_count)
    print_slot_machine(slots)

main()