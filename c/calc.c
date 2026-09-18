#include <stdio.h>
#include <stdbool.h>

int main(){
    double num1, num2;
    int inp;
    float result;

    printf("Choose operation\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n");

    while(true)
    {
        printf("Enter choice: ");
        scanf("%d", &inp);

        if (inp > 4 || inp < 1){
            printf("Error Incorrect choice number, ");
        }
        else{
            break;
        }
    }
    printf("Enter value for two numbers seperated by spaces: ");
    scanf("%lf %lf", &num1, &num2);

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
    printf("The Result Is: %.2lf\n", result);
}
