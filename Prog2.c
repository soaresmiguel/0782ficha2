#include <stdio.h>
int main (void) {
    int x;
    int y;
    printf("introduza o valor de x\n");
    scanf(" %d",&x);
    printf("introduza o valor de y\n");
    scanf(" %d",&y);

    if (x < y) {
        printf(" %d é menor que %d\n",x,y);

    }else if (x>y) { 

        printf(" %d é maior que %d\n",x,y);
        
    } else {


printf("  ambas das opçoes sao iguais %d=%d\n ",x,y);

    }
    

}