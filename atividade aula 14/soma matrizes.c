#include <stdio.h>
int main() {
    
    int numeros[3][3] = {
        {13, 13, 13},
        {10, 10, 10}
    };
    
    
    int total = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            total += numeros[i][j];
        }
    }
     
    printf("Total da soma das matrizes: %d\n", total);
      
    return 0;  
}