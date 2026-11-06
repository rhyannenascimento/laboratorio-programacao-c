#include <stdio.h>
int exibirMenu(void){
    int calculadora;
    printf("\n======CALCULADORA======\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", & calculadora);
    
    return calculadora;
}

    int somar(int n1, int n2){
        return n1 + n2;
    }

    int subtrair(int n1, int n2){
        return n1 - n2;
    }

    int multiplicar(int n1, int n2){
        return n1 * n2;
    }

    float dividir(int n1, int n2){
        return (float) n1 / n2;
    }

int main(void)
{
    int calculadora, n1, n2;
    float valor;
    
    do{
        calculadora = exibirMenu();
        
        if ((calculadora >= 1) && (calculadora <= 4)){
            printf("\nEscolha o primeiro número: \n");
            scanf("%d", & n1);
            printf("\nEscolha o segundo número: \n");
            scanf("%d", & n2);
        } 
        
        if (calculadora == 0) {
            printf("Programa encerrado.");
            return 0;
        }
        
        
        switch(calculadora){
            case 1:
                valor = somar(n1, n2);
                printf("Resultado: %.2f\n", valor);
                break; 
            
            case 2:
                valor = subtrair(n1, n2);
                printf("Resultado: %.2f\n", valor);
                break;
            
            case 3:
                valor = multiplicar(n1, n2);
                printf("Resultado: %.2f\n", valor);
                break;
            
            case 4:
                if (n2 != 0.0){
                    valor = dividir(n1, n2);
                    printf("Resultado: %.2f\n", valor);
                } else {
                    printf("Erro! Não foi possível fazer divisão com 0.\n");
                }
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
        
    } while (calculadora != 0);
    
    return 0;
}

