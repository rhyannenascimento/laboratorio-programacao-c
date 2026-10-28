#include <stdio.h>

int main() {
    int numeros[2][2];
    
    //Digitar os números//
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite o número na posição [%d][%d]: ", i, j);
            scanf("%d", & numeros[i][j]);
        }
    }
 
 
    //Ler os números
     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
     }
        
    

    return 0;
}