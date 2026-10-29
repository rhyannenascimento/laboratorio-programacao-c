#include <stdio.h>
#include <string.h>

int main()
{   char nome[50];
    char perfil[20];
    char copia[50];
    char mensagem[100] = "Bem-vindo(a), ";
    
    printf("======CADASTRO DE USUÁRIOS======\n");
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu perfil: ");
    scanf("%19s", perfil);
    
    
    strcpy(copia, nome);
    strcat(mensagem, nome);

    
    
    printf("\n\n======DADOS CADASTRADOS======\n");
    printf("Nome: %s\n", copia);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    if (strcmp(perfil, "ADMIN") == 0){
        printf("Perfil: Administrador.\n");
    }else{
        printf("Perfil: Comum.\n");
    }
    
    printf("%s!\n", mensagem);
    printf("Cadastro realizado com sucesso.");

    

    return 0;
}