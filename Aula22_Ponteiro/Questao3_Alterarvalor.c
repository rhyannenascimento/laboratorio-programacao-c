#include <stdio.h>

int main()
{
    int numero = 15;
    int *ponteiro = &numero;
    
    printf("Número inicial: %d\n", numero);
    
    *ponteiro = 50;
    
    printf("Valor atualizado: %d\n", numero);
    
    return 0;
}