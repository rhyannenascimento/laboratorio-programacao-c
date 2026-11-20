#include <stdio.h>
typedef struct{
    char nome [50];
    int idade;
    float salario;
} Funcionario;


int main()
{
    Funcionario funcionario1, funcionario2;
    
    printf("---- CADASTRAR FUNCIONÁRIOS----\n");
    printf("Nome do 1° funcionário: ");
    scanf(" %49[^\n]", funcionario1.nome);
    printf("Idade: ");
    scanf("%d", & funcionario1.idade);
    printf("Salário: ");
    scanf("%f", & funcionario1.salario);
    
    printf("Nome do 2° funcionário: ");
    scanf(" %49[^\n]", funcionario2.nome);
    printf("Idade: ");
    scanf("%d", & funcionario2.idade);
    printf("Salário: ");
    scanf("%f", & funcionario2.salario);
    
    printf("\n-----CADASTRO DE FUNCIONARIOS-----\n");
    printf("Nome do 1° funcionário: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salário: R$%.2f\n\n", funcionario1.salario);
    printf("Nome do 2° funcionário: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salário: R$%.2f\n", funcionario2.salario);
    
    if (funcionario1.salario > funcionario2.salario){
        printf("\nMaior salário é do 1° funcionário, com R$%.2f\n", funcionario1.salario);
        printf("\nDiferença salarial: R$%.2f\n", funcionario1.salario - funcionario2.salario);
        
    } else if (funcionario2.salario > funcionario1.salario){
        printf("\nMaior salário é do 2° funcionário, com R$%.2f\n", funcionario2.salario);
        printf("\nDiferença salarial: R$%.2f\n", funcionario2.salario - funcionario1.salario);
    } else{
        printf("\nSalário dos funcionários são iguais, com R$%.2f\n", funcionario1.salario);
        printf("\nDiferença salarial: R$0000.00");
    }

    return 0;
}