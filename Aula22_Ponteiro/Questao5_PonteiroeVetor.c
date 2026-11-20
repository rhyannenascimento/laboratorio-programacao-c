#include <stdio.h>

int main()
{
    int numeros[5];
    int *p = numeros;
    
    for (int i = 0; i < 5; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", & numeros[i]);
    }
    
    for (int i = 0; i < 5; i++){
        printf("%d° número: %d\n", i + 1, *(p + i));
    }
    

    return 0;
}