//分別使用 if else＆switch case
//輸入一個整數，判斷它是奇數還是偶數，並輸出對應訊息。

//輸入：4  
//輸出：Even number
//if else
#include <stdio.h>

int main() {
    int num;
    num=12;
    
    if (num % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");

    return 0;
}

//switch case
#include <stdio.h>

int main() {
    int num;
    num=12;

    switch (num % 2) {
        case 0:
            printf("Even number\n");
            break;
        case 1:
        case -1:  // 負奇數會是 -1
            printf("Odd number\n");
            break;
    }

    return 0;
}

//使用 if else
//輸入一個 0~100 的成績，輸出等級：

#include <stdio.h>

int main() {
    int score = 95;

    if (score >= 90 && score <= 100)
        printf("Grade: A\n");
    else if (score >= 80)
        printf("Grade: B\n");
    else if (score >= 70)
        printf("Grade: C\n");
    else if (score >= 60)
        printf("Grade: D\n");
    else if (score >= 0)
        printf("Grade: F\n");
    else if (socre )
        printf("Invalid score.\n");

    return 0;
}


//使用 switch case
//輸入一個整數（1~7），對應輸出星期幾（1 表示星期一，7 表示星期日）

//輸入：3  
//輸出：Wednesday

#include <stdio.h>

int main() {
    int day=2;

    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day\n");
    }

    return 0;
}

//使用 switch case
//輸入兩個數字與一個運算符（+、-、*、/），依運算符輸出計算結果。

//輸入：3 + 5  
//輸出：8

//提示：運算符可用 char 存取，如 char op = '+';，然後用 switch(op) 判斷

#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    a=4;
    b=9;
    op='*';

    switch (op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/':
            if (b != 0)
                printf("%d\n", a / b);
            else
                printf("Cannot divide by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}

//進階題（混合使用 if else與 switch case）
//輸入年份與月份，輸出該月有幾天（要考慮閏年規則）：

//2月在閏年是29天，否則28天。
//4、6、9、11月為30天。
//其餘為31天。

//輸入：2024 2  
//輸出：29 days

#include <stdio.h>

int main() {
    int month,days,year;
    
    month =7;
    days =0;// 給定初始值
    year = 2025;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                days = 29;
            else
                days = 28;
            break;
        default:
            printf("Invalid month\n");
            return 1;
    }

    printf("%d days\n", days);
    return 0;
}
