#include <stdio.h>


int main(){

    int inp,a,b,c=0;

    printf("Enter a number: ");
    scanf("%d", &inp);
    
    a=inp;
    while (inp>0)
    {
        b=inp%10;
        c+=b*b*b;
        inp=inp/10;
    }
    if (a==c)
    {
        printf("This is armstrong number\n");
    }else{
        printf("This is not an armstrong number\n");
        
    }
}