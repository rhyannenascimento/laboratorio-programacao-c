#include <stdio.h>

int main()
{
    int numero = 20;
    int *ponteiro;
    
    ponteiro = &numero;
    
    printf("Número: %d\n", numero);
    printf("Endereço do numero: %p\n", (void *)&numero);
    printf("Endereço armazenado no ponteiro: %p\n", (void *)ponteiro);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);
    

    return 0;
}