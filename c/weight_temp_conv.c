#include <stdio.h>
#include <stdbool.h>

int main(){

    int num, choice;
    double ptkg = 0.45359237;
    double kgtp = 2.20462262;
    double weight, ans, temp;
    bool status = false;

    printf("1. Weight Convertion.\n2. Temperature Conversion\nEnter your choice: ");

    while (true)
    {
        
        scanf(" %d", &choice);

        if (choice == 1)
        {
            status = true;
            printf("1. Pound to kilogram.\n2. Kilogram to pound\n");
            break;
        }
        else if (choice == 2)
        {
            status = false;
            printf("1. Celcius to Farenhite\n2. Farenhite to celcius\n");
            break;

        }
        else{
            printf("Invalid Choice Input select 1 or 2.\nEnter Choice: ");
        }
    }
    
    while (status)
    {
        printf("Select an operation: ");
        scanf(" %d", &num);

   
        if (num == 1)
        {
            printf("Enter weight in Pounds: ");
            scanf(" %lf", &weight);
            ans = weight * ptkg;
            printf("%.2f Pounds Converted to Kilograms is: %.2f Kg", weight, ans);
            break;

        }
        else if (num == 2)
        {
            printf("Enter weight in Kilogram: ");
            scanf(" %lf", &weight);
            ans = weight * kgtp;
            printf("%.2f Kilograms Converted to pounds is: %.2f lbs", weight, ans);
            break;
        }
        else
        {
            printf("Invalid Input Choose Operation 1 or 2\n");
        }
    }
    
    while (!status)
    {
        printf("Select an operation: ");
        scanf(" %d", &num);

        if (num == 1)
        {
            printf("Enter temperature in Celcius: ");
            scanf("%lf", &temp);
            ans = (temp * 1.8) + 32;
            printf("%.2lf° Celcius is equal to %.2lf Farenheit.", temp, ans);
            break;
        }
        else if (num == 2)
        {
            printf("Enter temperature in Farenheit: ");
            scanf("%lf", &temp);
            ans = (temp-32) * 5/9;
            printf("%.2lf Farenheit is equal to %.2lf° Celcius.", temp, ans);
            break;
        }
        else{
            printf("Invalid Input Choose Operation 1 or 2\n");
        }
    }
}



