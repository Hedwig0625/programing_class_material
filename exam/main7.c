//印出房子,n=2
//屋頂高n,屋子高n
//   *
//  ***
// *****
//*******
//*******
//*     *
//*     *
//*     *
//*     *
//*******

#include <stdio.h>

int main(){
    
    int n=4;
    
    for(int i=0; i<n; i++){
        
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        
        for(int k=0;k < 2*i+1 ;k++){
            printf("*");
        }
        
    printf("\n");    
    }
    
    int row= n+2;
    int col=2*n-1;
    
    for(int l=0;l<row;l++){
        
        for(int m=0;m<col;m++) {
            if(l == 0|| l == row -1 ||m ==0 || m == col-1){
                printf("*");    
            }else{
                printf(" ");   
            }
        }   
    printf("\n");
    }
    
    return 0;
}
