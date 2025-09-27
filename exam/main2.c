// find the sum of the first and last digit of a number using a loop
//#include<stdio.h>
//int main(){
//int num = 12345;
//int sum=0;
//int firstDigit,lastDigit;
//}

#include <stdio.h>

int main(){
    int num = 12345;
    int sum =0;
    int firstDigit,lastDigit;
    
    lastDigit=num %10;
    
    while(num /10 >= 1){
        num /=10;
    }
    
    firstDigit=num;
    
    sum = firstDigit+ lastDigit;
    
    printf("%d\n",sum);
    
    return 0;
}
