#include <stdio.h>

int main(){
    FILE *arquivo;
    int numero;
    int i;

    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numero);
        fprintf(arquivo, "%d\n", numero);
    }

    if (fclose(arquivo) != 0) {
        perror("Erro ao salvar os dados");
        return 1;
    }

    printf("\nNumeros gravados com sucesso!\n");


    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo para leitura");
        return 1;
    }

    printf("\n===== NUMEROS ARMAZENADOS =====\n");
    for (i = 0; i < 5; i++) {
        fscanf(arquivo, "%d", &numero);
        printf("%d\n", numero);
    }

    fclose(arquivo);

    return 0;
}
