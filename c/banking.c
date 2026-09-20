#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int GetUserChoice();
int InvalidSel();
double CheckBalance();
double Withdraw();
double Deposit();

double balance=0, deposit=0, withdraw=0;
int choice;
char user[20] = "";

int main(){

    printf("***WELCOME TO CITY BANK***\n");
    printf("Enter your name to continue: ");
    fgets(user, sizeof(user), stdin);
    user[strlen(user) - 1] = '\0';

    printf("\nWelcome Back %s\n\nChoose an option you'd like to proceed with(1-3)\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n", user);

    while (true)
    {
        GetUserChoice();

        while (choice > 4 || choice < 1)
        {
            InvalidSel();
        }
        
        switch (choice)
        {
        case 1:
            CheckBalance();
            break;
        case 2:
            Deposit();
            break;
        case 3:
            Withdraw();
            break;
        case 4:
            printf("Thank you for using our services.");
            return 0;
        default:
            InvalidSel();
        }

    }
}


int InvalidSel(){
    printf("Invalid selection, Select an option: ");
    scanf("%d", &choice);
    return choice;
}

int GetUserChoice(){
    printf("\nSelect an option or press 4 to exit: ");
    scanf(" %d", &choice);
    return choice;
}

double CheckBalance(){
    printf("Your current balance is: %lf", balance);
    return balance;
}

double Withdraw(){
    printf("Enter the ammount you'd like to Withdraw: ");
    scanf(" %lf", &withdraw);
    balance -= withdraw;
    printf("Withdrawal of ₹%lf is Successful", withdraw);
    return balance;
}

double Deposit(){
    printf("Enter the ammount you'd like to Deposit: ");
    scanf(" %lf", &deposit);
    balance += deposit;
    printf("Deposited ₹%lf Successfully", deposit);
    return balance;
}