#include <stdio.h>

int main(){
    int numeros [2][3];
    int soma = 0;
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o número na posição [%d][%d]: \n",i, j);
            scanf("%d", & numeros[i][j]);
            soma += numeros[i][j];
        }
    }
    
    printf("A soma dos números das matrizes é de %d", soma);
    
    return 0;
}