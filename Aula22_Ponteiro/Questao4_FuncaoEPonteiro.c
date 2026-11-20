#include <stdio.h>

int dobro(int *numero){
    return *numero * 2;
}

int main()
{
    int valor;
    
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    int resultado = dobro(&valor);
    printf("Dobro: %d\n", resultado);

    return 0;
}