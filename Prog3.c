#include <stdio.h>
int main (void){
    float  euro = 1.45204;
    float usddollar =1.119090;
    float can;
    int menu;
    float conver;
    float conta;
    printf("1 opcao de euro para USD DOLLAR\n");
    printf("2 opcao de USD DOLLAR para Euro\n");
    printf("3 opcao de euro para can DOLLAR\n");
    printf("4 opcao de CAN para EURO DOLLAR\n");
    scanf(" %d", &menu);
    if (menu == 1)
    {
        printf("introduza a quantidade \n");
        scanf(" %f", &conver);
        conta = conver / usddollar;
        printf("introduziste %f euros e converteste em %f ",conver,conta);
    }
    
        else if (menu ==2 )
{
    printf(" introduz a quantidade\n");
    scanf(" %f", &conver);
    conta= conver * usddollar;
    printf("introduziste  %f usd dollar e converteste em euro %f conta\n",conver,conta);

}    
else if (menu == 3)
{
printf ("introduza a quantidade \n");
scanf(" %f", &conver);
conta = conver / euro;
printf(" introduziste %f euro  e converteste em %f",conver, conta);
}
else if (menu == 4)
{
    printf("introduza a quantidade \n");
    scanf(" %f",&conver);
    conta = conver * euro;
    printf("introduziste %f cad e converteste em %f",conver,conta);
}
else 
{
    printf(" opcao nao e valida tente de novo com uma da opcoes em cima\n ");
}

    }