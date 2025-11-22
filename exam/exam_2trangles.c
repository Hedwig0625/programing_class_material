#include<stdio.h>

int main(){
    
    int i=4;
    
    for(int k=1;k<=i;k++){
        
        for(int l=0;l< i-k;l++){
            printf(" ");
        }
        
        for(int m=0; m<k ;m++){
            printf("*");
        }
        
    printf("\n");
    }
    
    for(int k=1;k<=i;k++){
        
        for(int l=0;l<i-1;l++){
            printf(" ");
        }
        
        for(int m=0;m<i-k+1 ;m++){
            printf("*");
        }
        
    printf("\n");
    }
}
