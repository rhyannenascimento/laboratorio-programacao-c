#include <stdio.h>

int main() {
    int matriz[3][3];
    int maior;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", & matriz[i][j]);

            if ((i == 0 && j == 0) || matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("\nO maior valor armazenado é: %d\n", maior);

    return 0;
}