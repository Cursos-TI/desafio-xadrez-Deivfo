#include <stdio.h>

//Recursivas dos movimentos de torre, bispo e rainha.

void MoverTorre(int numero){
    if (numero > 0){
        printf("Direita \n");
        MoverTorre(numero - 1);
    }    
}

void MoverBispo(int numero){
    if (numero > 0){        
        printf("Cima, Direita \n");
        MoverBispo(numero - 1);        
    }    
}

void MoverRainha(int numero){
    if (numero > 0){        
        printf("Esquerda \n");
        MoverRainha(numero - 1);        
    }    
}

int main() {
    
    //Movimento da torre (recursiva)
    int torre = 5; // número de repetições
    printf("\n");
    printf("-----Movimento da torre-----\n"); 
    printf("\n");
    MoverTorre(torre);

    //Movimento do bispo (recursiva)
    int bispo = 5; // número de repetições
    printf("\n");
    printf("-----Movimento do bispo-----\n");
    printf("\n");
    MoverBispo(bispo);

    //Movimento da rainha (recursiva)
    int rainha = 7; // número de repetições
    printf("\n");
    printf("-----Movimento da rainha-----\n");
    printf("\n");
    MoverRainha(rainha);


    // Movimento do Cavalo (loops aninhados)
    printf("\n");
    printf("-----Movimento do Cavalo-----\n");
    printf("\n");
    for (int i = 0; i < 2; i++) { //
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
    printf("\n");


return 0;
}
