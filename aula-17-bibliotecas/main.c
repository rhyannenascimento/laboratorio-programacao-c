#include <stdio.h>
#include <string.h>

int main()
{   char nome_produto[50];
    char categoria[20];
    char copia[50];
    char mensagem[100] = "Produto: ";
    char mens_categoria[100] = "Categoria: ";
    
    printf("======CADASTRO DE PRODUTOS======\n");
    printf("Nome do produto: ");
    scanf("%49s", nome_produto);
    printf("Categoria: ");
    scanf("%19s", categoria);
    
    
    strcpy(copia, nome_produto);
    strcat(mensagem, nome_produto);
    strcat(mens_categoria, categoria);
    

    
    
    printf("\n\n======RESUMO======\n");
    printf("Produto: %s\n", copia);
    printf("Quantidade de caracteres: %zu\n", strlen(nome_produto));
    if (strcmp(categoria, "HARDWARE") == 0){
        printf("Perfil: Hardware.\n");
    }else{
        printf("Perfil: Periferico.\n");
    }
    
    printf("%s\n Produto: ", mensagem);
    printf("%s", mens_categoria);
    printf("Cadastro realizado com sucesso.");

    

    return 0;
}