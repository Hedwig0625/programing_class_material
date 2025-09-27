//印出兩個三角形：
//*******
// *****
//  ***
//   *
//  ***
// *****
//*******
// i=4;

#include <stdio.h>

int main(){
    
    int i=4;
  
 //倒金字塔   
  
    for(int j=0;j<i;j++){  //換行
        
        for(int k=0;k<j;k++){  //印空白
            printf(" ");
        }
        
        for(int l=0;l<2*(i-j)-1;l++){ //印＊
                printf("*");
            }
    
    printf("\n");
    }
    
  //正三角形
  
   for(int a=1;a<i;a++){ //換行,從a=開始，少換一行
        
        for(int b=0; b<i-a-1;b++){ //印空白
            printf(" ");
        }
        
        for(int c=0;c<2*a+1;c++){ //印＊
                printf("*");
            }
    
    printf("\n"); 
   }
   return 0;
}
