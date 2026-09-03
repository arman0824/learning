#include <stdio.h>

int main(){
    int quant = 0;
    int itemint = 0;
    float total = 0;

    float pizza = 10.99;
    float burger = 8.99;
    float sandwich = 6.99;
    float pasta = 12.99;
    float salad = 7.99;

    printf("Enter the choice for your item:\n");
    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("3. Sandwich\n");
    printf("4. Pasta\n");
    printf("5. Salad\n");
    scanf("%d", &itemint);

    if (itemint < 1 || itemint > 5) {
        printf("Invalid choice. Please select a valid item number.\n");
        return 1;
    }
    if (itemint == 1) {
        printf("You have selected Pizza.\n");
        printf("Enter the quantity: ");
        scanf("%d", &quant);
        total = pizza * quant;
    } else if (itemint == 2) {
        printf("You have selected Burger.\n");
        printf("Enter the quantity: ");
        scanf("%d", &quant);
        total = burger * quant;
    } else if (itemint == 3) {
        printf("You have selected Sandwich.\n");
        printf("Enter the quantity: ");
        scanf("%d", &quant);
        total = sandwich * quant;
    } else if (itemint == 4) {
        printf("You have selected Pasta.\n");
        printf("Enter the quantity: ");
        scanf("%d", &quant);
        total = pasta * quant;
    } else if (itemint == 5) {
        printf("You have selected Salad.\n");
        printf("Enter the quantity: ");
        scanf("%d", &quant);
        total = salad * quant;
    }
    printf("Total cost: $%.2f\n", total);

    return 0;
}