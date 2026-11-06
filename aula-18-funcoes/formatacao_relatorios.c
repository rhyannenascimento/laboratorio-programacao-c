#include <stdio.h>
#include <string.h>

void exibirLinha(void){
    printf("**********\n");
}

int main()
{
    char titulo[100];
    
    printf("Digite um título: ");
    fgets(titulo, 100, stdin);
    titulo[strcspn(titulo, "\n")] = '\0';
    
    exibirLinha();
    printf("%s\n", titulo);
    exibirLinha();
    
    return 0;
}