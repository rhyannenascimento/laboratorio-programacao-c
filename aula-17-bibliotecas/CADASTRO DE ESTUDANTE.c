#include <stdio.h>
#include <string.h>

int main()
{   char nome[50];
    char cod_curso[20];
    char copia[50];
    char mensagem[100] = "Olá, ";

    
    printf("======CADASTRO DE ESTUDANTES======\n");
    printf("Nome do estudante: ");
    scanf("%49s", nome);
    printf("Código do curso: ");
    scanf("%19s", cod_curso);
    
    
    strcpy(copia, nome);
    strcat(mensagem, nome);
    
    
    printf("\n======DADOS CADASTRADOS======\n");
    printf("Nome do estudante: %s\n", copia);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    if (strcmp(cod_curso, "CC") == 0){
        printf("Perfil: Ciência da computação.\n");
    }else{
        printf("Perfil: Sistema de informação.\n");
    }
    
    printf("%s!\n", mensagem);
    printf("Cadastro realizado com sucesso!");

    return 0;
}