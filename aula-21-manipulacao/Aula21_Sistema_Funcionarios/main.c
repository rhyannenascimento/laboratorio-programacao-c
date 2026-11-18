#include <stdio.h>
# include <stdlib.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario f;
    int opcao;
    int caractere;
    int qnt;
    int i;

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
            printf("Quantidade de funcionarios para cadastrar (1 ate 5): ");
            scanf("%d", &qnt);

            while (qnt < 1 || qnt > 5) {
                printf("Quantidade invalida! Insira de 1 ate 5: ");
                scanf("%d", &qnt);
            }

            for (i = 0; i < qnt; i++) {
                printf("\n==== CADASTRO DE FUNCIONARIO ====\n");
                printf("Nome do %do funcionario: ", i + 1);
                scanf(" %49[^\n]", f.nome);

                printf("Salario: ");
                scanf("%f", &f.salario);

                printf("Horas extras: ");
                scanf("%d", &f.horasExtras);

                arquivo = fopen("funcionarios.txt", "a"); //permitte add novos dados//
                if (arquivo == NULL) {
                    perror("Erro ao abrir arquivo");
                    continue;
                }

                fprintf(arquivo, "\nFUNCIONARIO: %s\n", f.nome);
                fprintf(arquivo, "Salario: R$ %.2f\n", f.salario);
                fprintf(arquivo, "Horas extras: %d\n", f.horasExtras);
                fprintf(arquivo, "----------------------------\n");

                if (fclose(arquivo) != 0) {
                    perror("Erro ao salvar os dados");
                } else {
                    printf("\nFuncionario cadastrado com sucesso!\n");
                }
            }
        }
        else if (opcao == 2) {
            arquivo = fopen("funcionarios.txt", "r");
            if (arquivo == NULL) {
                printf("\nNenhum funcionario cadastrado.\n");
                continue;
            }

            printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");
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
