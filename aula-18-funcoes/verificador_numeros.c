#include <stdio.h>
void titulo(void){
    printf("=====VERIFICADOR DE NÚMEROS=====");
}

int verificarPar(int numero){
    if (numero % 2 == 0){
       return 1; 
    } else {
        return 0;
    }
}


int main()
{
    int verificar, numero;
    titulo();
    
    printf("\nDigite um número: ");
    scanf("%d", & numero);
    
    verificar = verificarPar(numero);
    if (verificar == 1){
       printf("O número %d é par.", numero);
    } else {
        printf("O número %d é ímpar.", numero);
    }
    
    
    return 0;
}