/*Você precisará usar pelo menos dois loops aninhados, sendo um deles obrigatoriamente um loop for. O outro loop pode ser while ou do-while.*/
/* duas para baixo, uma para a esquerda  (Baixo, Baixo, Esquerda)*/

#include <stdio.h>
 
int main() {

    int torre;
       
    //Dados de movimentação da torre (FOR)
    printf("-----Movimentação da torre ----- \n");
    printf("\n");
    for (torre = 0; torre < 5 ; torre++) // Valor da torre começa zerado. e termina contando até 5x o valor de torre e imprimir o resultado abaixo. //incremento da torre na função
    {
    printf("Direita\n"); // impressão de movimentação da torre
    }
  
  printf("____________________________________________________________________\n");


  //Dados de movimentação do bispo (WHILE)
    int bispo = 0;

    printf("-----Movimentação do Bispo ----- \n");
    printf("\n");
    while (bispo < 5) // Valor do bispo até 5x o valor e imprimir o resultado abaixo.
    {
    printf("Cima, Direita \n"); // impressão de movimentação do bispo
    bispo++; // incremento do loop
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
    printf("\n");

    printf("____________________________________________________________________\n");

    // Dados de movimentação do cavaldo (For / While) 
    printf("-----Movimentação do Cavalo ----- \n");
    printf("\n");
    for (int m = 0; m < 2; m++) { // Valor do cavalo repete 2x para baixo e termina na função abaixo. 
        printf("Baixo\n"); //Impressão do movimento do bispo.
        
    }
    int n = 0;
    while (n < 1) { // Valor do cavalo para esquerda.
        printf("Esquerda\n");
        n++;
        printf("\n");
    }

return 0;
}
