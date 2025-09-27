//please rewrite the following program to avoid the occurence of an integer overflow problem:
//#include<stdio.h> 
//int main(){
//unsigned char i=200;
//unsigned char j= 200;
//unsigned char k =0;
//k =(i+j);
//k /=2;
//printf("average :%d and %d = %d\n",i,j,k);
//return 0;
//}

#include <stdio.h>

int main(){
   unsigned char i =200;
   unsigned char j =220;
   unsigned char k =0;
   
   k = i+ (j-i)/2;
   
   printf("average :%d and %d = %d\n",i,j,k);
   
   return 0;
}
