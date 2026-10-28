#include <stdio.h>

int main()
{
	int numeros [3][3];
	int pares = 0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j ++) {
            printf("Digite o número na posição [%d][%d]: \n",i, j);
			scanf("%d", & numeros[i][j]);
			
			if (numeros[i][j] % 2 == 0){
			    pares++;
			}
		}
	}
	
	printf("A quantidade de números pares é de %d", pares);
	
	return 0;
}