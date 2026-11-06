#include <stdio.h>

void titulo(void){
   printf("=====COMPARADOR DE PREÇOS====="); 
}

float maiorPreco(float p1, float p2){
    if (p1 > p2){
        return p1;
    } else {
        return p2;
    }
}

int main (){
    float p1, p2, maior;
    titulo();
    printf("\nPreço 1: ");
    scanf("%f", & p1);
    printf("Preço 2: ");
    scanf("%f", & p2);
    
    if (p1 == p2){
        printf("Os preços são iguais: R$ %.2f", p1);
    } else{
        maior = maiorPreco(p1, p2);
        printf("Maior preco: R$ %.2f", maior);
    }
   return 0; 
}
    