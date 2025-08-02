#include <stdio.h>

int main() {
    float a,b;
    char op;
    printf("Enter the first number-\n");
    scanf("%f", &a);
    printf("Enter the second number-\n");
     scanf("%f", &b);
     printf("Choose the operation from (+,-,*,/)-\n");
//here we need to make the user choose from one digit char such as +,- and not add or sub as these are not single char
     scanf(" %c", &op);
     //space before %c is important
     if(op=='+'){
        printf("The sum is %f", a+b);
     }
     else if(op=='-'){
        printf("The difference is %f", a-b);
     }
     else if(op=='*'){
        printf("The product is %f", a*b);
     }
     else if(op=='/'){
        printf("The quotient is %f", a/b);
     }
     
     //use '' in if and else if and is used only in character not integers
    return 0;
}