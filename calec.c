#include<stdio.h>
int main(){
    int a ; int b;
    char op;
    printf("Enter value of a");
    scanf("%d",&a);
     printf("Enter value of b");
    scanf("%d",&b);
     printf("Enter operator (*,-,+,/,%)");
     scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("Addition =%d", a+b);
        break;
        case '-':
        printf("subtraction =%d", a-b);
        break;
        case '*':
        printf("multiplication =%d", a*b);
        break;
         case '/':
        printf("Division =%d", a/b);
        break;
         case '%':
        printf("Modulus =%d", a%b);
        break;
        default:
        printf("invalid");
    }
    return 0;
}