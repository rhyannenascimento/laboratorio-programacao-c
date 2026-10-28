
#include <stdio.h>

int main()
{
    int notas [3][2];
    float media;
    for (int i = 0; i < 3; i++){
        int soma = 0;
        for (int j = 0; j < 2; j ++){
            //Ler notas dos tres alunos//
            printf("Digite a %d nota do %dº aluno:\n", j + 1, i + 1);
            scanf("%d", & notas[i][j]);
            
            soma += notas[i][j];
        }
        
        media = soma / 2;
        printf("%dº aluno possui a média de %.2f\n", i + 1, media);
    }
    
    

    return 0;
}