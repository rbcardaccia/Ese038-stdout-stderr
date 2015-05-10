#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRLEN 25

int main(int argc, char** argv) {
    
    char str [MAX_STRLEN+1];
    int scelta;
    
    printf("Inserire una stringa di max %c caratteri, [FINE] per terminare:\n", MAX_STRLEN)
    scanf("%[^\n]", str);
    
    while(strcmp(str, "[fine]"))
    {
        printf("Vuoi scrivere su: 1-stdout o 2-stderr");
         scanf("%d", scelta);
        
        switch(scelta) {
            case 1:
                fprintf(stdout, "%s\n", str);
                break;
            case 2:
                fprintf(stderr, "%s\n", str);
                break;
            default:
                printf("Opzione non disponibile\n");
                        
        }
         printf("Inserisci una stringa di max %c caratteri:\n", MAX_STRLEN);  
         scanf("\n%[^\n]", scelta);
    
      
    
    return (EXIT_SUCCESS);
}
    
    
    
    
    
    
    
    
    
    
    
    
    

