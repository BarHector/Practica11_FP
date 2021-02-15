#include <stdio.h> 

int main(void){ 
    int original[7][7]; 
    int cambio[7][7]; 
    
    for (int i= 0; i<7; i++){ 
        for(int j=0; j<7; j++){ 
            original[i][j] = 2+j; 
            
        } 
    } 

    printf("Matriz Original\n");
    for (int i= 0; i<7; i++){ 
        for(int j=0; j<7; j++){ 
            printf("%d\t", original[i][j]);
        } 
        printf("\n"); 
    } 
    

    for(int i= 0; i<7; i++){ 
        for(int j=0; j<7; j++){ 
            cambio[j][i] = original[i][j]; 
            
        } 
    } 

    printf("Matriz Volteada\n");
    for (int i= 0; i<7; i++){ 
        for(int j=0; j<7; j++){ 
            printf("%d\t", cambio[i][j]); 
        } 
        printf("\n"); 
    } 
    return 0 ; 
} 