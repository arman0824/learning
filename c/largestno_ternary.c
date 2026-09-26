#include <stdio.h>


int main(){

    int a,b,c;

    printf("Enter three numbers seperated by spaces: ");
    scanf(" %d%d%d", &a,&b,&c);

    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("largest number is: %d\n", max);

}