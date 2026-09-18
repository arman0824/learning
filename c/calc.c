#include <stdio.h>
#include <stdbool.h>

int main(){
    int num1, num2, inp;
    float result;

    printf("Choose operation\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n");

    while(true)
    {
        printf("Enter choice number: ");
        scanf("%d", &inp);

        if (inp > 4 || inp < 1){
            printf("Error Incorrect choice number\n");
        }
        else{
            printf("Enter value for number 1: ");
            scanf("%d", &num1);
            
            printf("Enter value for number 2: ");
            scanf("%d", &num2);
            break;
        }
    }

    switch (inp)
    {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 / num2;
        break;
    case 4:
        result = num1 * num2;
        break;
    }
    printf("The Result Is: %.2f\n", result);
}
