#include <stdio.h>

int main(){
    int num1, num2, inp;
    float result;

    printf("Choose operation\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n");
    printf("Enter choice number; ");
    scanf("%d", &inp);

    if (inp > 5 || inp < 1){
        printf("Error Incorrect choice number\n");
        return 1;
    }
    else{
        printf("Enter value for number 1: ");
        scanf("%d", &num1);
        
        printf("Enter value for number 2: ");
        scanf("%d", &num2);
    }

    if (inp == 1){
        result = num1 + num2;
    }
    if (inp == 2){
        result = num1 - num2;
    }
    if (inp == 3){
        result = num1 / num2;
    }
    if (inp == 4){
        result = num1 * num2;
        return 0;
    }
    printf("The Result Is: %.2f\n", result);
}
