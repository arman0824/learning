#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int table, num=0;

    printf("Enter: ");
    scanf("%d", &table);

    for (int i = table; i <= (table*10); i+=table)
    {
        num++;
        printf("%d x %d = %d\n", table,num,i);
    }
    

}