//counts the number of 1s in the binart representation of an integer.
// int n =8; 0x1000 output =1;
//int n =7;0x0111 output 3;
// question: n =15;

#include <stdio.h>

int main(){
  
  int n =15;
  int m=n;
  int bin =0;
  int base =1;
  
  while(n !=0){
      
      int x =n % 2;
      
      bin = bin+x *base;
      
      n /=2;
      
      base *=10;
  }
  int cpy=bin;
  
  int count=0;
  
  while(bin !=0){
      
      if(bin % 10 == 1){
          count ++;
      }
      bin /=10;
  }
  
  printf("binary of %d is %d,it has %d 1s\n",m,cpy,count);
  return 0;
}
