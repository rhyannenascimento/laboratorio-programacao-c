#include <stdio.h>
int main()
{
    int cinema[5][8] = {
       {0, 1, 0, 0, 0, 1, 1, 0},
       {1, 1, 1, 0, 0, 1, 1, 0},
       {1, 1, 0, 1, 0, 1, 0, 0},
       {0, 0, 1, 1, 1, 1, 1, 0},
       {1, 1, 0, 1, 0, 1, 1, 0}
    };
    
    if (cinema[1][2] == 1) {
        printf("Lugar indisponível");
    } else {
        printf("Lugar disponível");
    } 
    
    return 0;
}
