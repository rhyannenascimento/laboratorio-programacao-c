#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite um valor: ");
    scanf("%d", & numero);
    
    printf("Número escolhido: %d\n", numero);
    printf("Endereço da variável numero: %p\n", (void *)&numero);

    return 0;
}