#include <stdio.h>
void titulo(void){
    printf("=====CALCULADORA DE FATORIAL=====");
}

int calcularFatorial(int numero){
    int resultado = 1;
    for(int i = 1; i <= numero; i++){
       resultado = resultado * i;
    }
    
    return resultado;
}


int main()
{
    titulo();
    int numero, fatorial;
    
    printf("\nDigite um número: ");
    scanf("%d", & numero);
    if ((numero >= 0) && (numero <= 12)){
        fatorial = calcularFatorial(numero);
        printf("Fatorial de %d = %d", numero, fatorial);
    } else {
        printf("Número inválido: digite um número entre 0 e 12.");
    }
    
    
    
    
    
    return 0;
}