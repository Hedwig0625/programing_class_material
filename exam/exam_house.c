#include <stdio.h>

int main(){
    int n=4;
    
    for(int i =0; i< n;i++){
        
        for(int j=1;j< n-i;j++){
            
            printf(" ");
        }
        
        for(int k =0;k < 2*i+1 ;k++){
            
            printf("*");
        }
        
    printf("\n");
    }
    
    for(int i=0;i<n+2; i++){
        if(i==0 || i==n+1){
            
            for(int j=0;j< 2*n-1;j++){
            printf("*");
            }
             
        }else{
            
            for(int k=0;k<2*n -1;k++){
                
                if(k==0 ||k == 2*n -2){
                    printf("*");
                }else{
                    
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    

    return 0;
}
