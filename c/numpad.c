#include <stdio.h>


int main(){

    char numpad[][4] = {{'1','2','3'},{'4','5','6'},{'7','8','9'},{'*','0','#'}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }
    


}