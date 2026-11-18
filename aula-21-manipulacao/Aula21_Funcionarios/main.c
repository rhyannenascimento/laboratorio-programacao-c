#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char matricula[20]; //Coloquei char em vez de inteiro porque//
                    //Nao estava aceitando o 00 no inicio da matricula//
} Funcionario;

int main(void) {
    FILE *arquivo;
    Funcionario f;
    int opcao;
    int caractere;
    int qnt_funcionario;
    int total_cadastrados = 0;
    int restantes;

    do {
        printf("\n===== SISTEMA DE CADASTRO DE FUNCIONARIOS =====\n");
        printf("1 - Cadastrar funcionario;\n");
        printf("2 - Visualizar funcionarios;\n");
        printf("0 - Sair.\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
            return 1;
        }

        if (opcao == 1) {
            restantes = 5 - total_cadastrados;

            if (restantes == 0) {
                printf("\nLimite de 5 funcionarios ja atingido!\n");
                continue;
            }

            printf("Quantidade de funcionarios para cadastrar (1 ate %d): ", restantes);
            scanf("%d", &qnt_funcionario);

            while (qnt_funcionario < 1 || qnt_funcionario > restantes) {
                printf("Quantidade invalida! Insira de 1 ate %d: ", restantes);
                scanf("%d", &qnt_funcionario);
            }

            for (int i = 0; i < qnt_funcionario; i++) {
                printf("\n============ CADASTRO DE FUNCIONARIO ============\n");
                printf("Nome do %do funcionario: ", i + 1);
                scanf(" %49[^\n]", f.nome);

                printf("Matricula: ");
                scanf(" %19s", &f.matricula);

                arquivo = fopen("funcionarios.txt", "a");
                if (arquivo == NULL) {
                    perror("Erro ao abrir arquivo");
                    continue;
                }

                fprintf(arquivo, "\n===================================\n");
                fprintf(arquivo, "      CADASTRO DE FUNCIONARIO");
                fprintf(arquivo, "\n===================================\n");
                fprintf(arquivo, "\nFUNCIONARIO: %s\n", f.nome);
                fprintf(arquivo, "MATRICULA: %s\n", f.matricula);
                fprintf(arquivo, "\n-----------------------------------\n");

                if (fclose(arquivo) != 0) {
                    perror("Erro ao salvar os dados");
                } else {
                    total_cadastrados++;
                    printf("\nFuncionario cadastrado com sucesso!\n");
                    printf("Dados salvos em funcionarios.txt\n");
                }
            }
        }
        else if (opcao == 2) {
            arquivo = fopen("funcionarios.txt", "r");
            if (arquivo == NULL) {
                printf("\nNenhum funcionario cadastrado.\n");
                continue;
            }

            printf("\n========= FUNCIONARIOS CADASTRADOS ==========\n");
            while ((caractere = fgetc(arquivo)) != EOF) {
                putchar(caractere);
            }
            fclose(arquivo);
        }
        else if (opcao == 0) {
            printf("\nPrograma encerrado.\n");
        }
        else {
            printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
