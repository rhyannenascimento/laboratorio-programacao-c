#include <stdio.h>

void titulo(void){
    printf("=====CONTROLE DE ESTOQUE=====");
}

int dobro(int numero){
    return numero * 2;
}



int main()
{
    int numero, resultado;
    titulo();
    
    printf("\nQuantidade inicial: ");
    scanf("%d", & numero);
    
    resultado = dobro(numero);
    
    printf("Quantidade após duplicação: %d", resultado);
    

    return 0;
}