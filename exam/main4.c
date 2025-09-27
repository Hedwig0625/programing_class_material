//outputs the entire nine times nine multiplication table using one loop.


#include <stdio.h>

int main(){
  
  int x=1;
  int y=1;
  
  while(x<10){
      
      if (y<10){
          
          printf("%d * %d = %d\n",x,y,x*y);
          y++;
      }else{
          y=1;
          x++;
          printf("\n");
      }
      
      }
  return 0;
  
}
