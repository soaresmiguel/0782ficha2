#include <stdio.h>
int main (void) {
    
    float conta;
    float lb = 2.2;
float kg; 
float montante;
int menu;    
     printf("introduza uma das opçoes 1 ou 2\n");
     printf("opcao 1 para passar quilogramas para libras\n");
     printf("opcao 2 para passar de libras para quilogramas ");

     
     scanf(" %d",&menu);

     if (menu == 1) {
        printf("introduza numero de kg\n");
        scanf(" %f",&montante);
        conta = montante * lb;
        printf("corresponde a %f lb\n",conta);
     } 
else  if (menu == 2)
{
    printf("quantos lb");
    scanf(" %f", &montante);
    conta = montante / lb;
    printf("corresponde a %f", conta);
}
else 
{
    printf("essa opcao NAO EXISTE");
}
return 0;
}