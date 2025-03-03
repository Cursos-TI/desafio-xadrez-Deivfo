/*
Bispo: 5 casas na diagonal superior direita
Torre: 5 casas para a direita
Rainha: 8 casas para a esquerda*/

#include <stdio.h>
 
int main() {

    int torre;
       
    //Dados de movimentação da torre (FOR)
    printf("-----Movimentação da torre ----- \n");
    printf("\n");
    for (torre = 0; torre < 5 ; torre++)
    {
    printf("Direita\n"); // impressão de movimentação da torre
    }
  
  printf("____________________________________________________________________\n");


  //Dados de movimentação do bispo (WHILE)
    int bispo = 0;

    printf("-----Movimentação do Bispo ----- \n");
    printf("\n");
    while (bispo < 5)
    {
    printf("Cima, Direita \n");    
    bispo++;
    }
   
    
  printf("____________________________________________________________________\n");

  //Dados de movimentação do rainha (DO WHILE)
    int rainha;

    printf("-----Movimentação da Rainha ----- \n");
    printf("\n");
    do
    {
    printf("Esquerda \n");
    rainha++;

    } while (rainha < 8);
    


return 0;
}
